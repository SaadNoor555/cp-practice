#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<queue>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

using namespace std;

struct cts
{
    int in;
    vector<int> al;
    int env= 0;
    int lvl;
    bool ind= false;
    int par=-1;
};

bool cmpfunc(struct cts A, struct cts B)
{
    if(A.lvl!=B.lvl)
        return A.lvl>B.lvl;

    else
        return A.al.size()<B.al.size();
    
}

void levels(struct cts cities[], int n, int x)
{
    bool marked[n];
    FOR(i, n, 1) marked[i]= 0;
    queue<int> que;
    que.push(x);
    cities[x].lvl= 0;
    marked[x]= 1;

    while(!que.empty())
    {
        x= que.front();
        que.pop();

        for(int i=0; i<cities[x].al.size(); i++)
        {
            int b=cities[x].al[i];

            if(!marked[b])
            {
                que.push(b);
                cities[b].lvl= cities[x].lvl+1;
                marked[b]= true;
            }
        }
    }
    cout << "Nodes"
         << "    "
         << "Level" << endl; 
    for (int i = 0; i < n; i++) 
        cout << " " << i << "   -->   " << cities[i].lvl << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, x, y, ans= 0;

    cin>> n>> k;
    struct cts cities[n+1];

    FOR(i, n-1, 1)
    {
        cin>> x>> y;
        if(x<y)
        {
            cities[x-1].al.PB(y-1);
            cities[y-1].al.PB(x-1);
            cities[y-1].par= x-1;
        }
        else
        {
            cities[y-1].al.PB(x-1);
            cities[x-1].al.PB(y-1);
            cities[x-1].par= y-1;
        }
    }
    FOR(i, n, 1)
        cities[i].in= i;
    
    levels(cities, n, 0);
    sort(cities, cities+n, cmpfunc);

    for(int i=0; i<k; i++)
        cout<<cities[i].in<<endl;

    for(int i= k-1; i>=0; i--)
    {
        cout<<cities[i].in;
        // ans+=cities[i].lvl;
        if(cities[cities[i].par].ind)
        {
            cities[i].lvl=cities[cities[i].par].ind+1;
            ans+=cities[i].lvl;
            cout<<"\t."<<cities[i].lvl<<endl;
            
        }
        else 
        {
            
            ans+=cities[i].lvl;
            cities[i].lvl--;
            cout<<"\t"<<cities[i].lvl<<endl;
        }
    }

    cout<<ans<<endl;
}