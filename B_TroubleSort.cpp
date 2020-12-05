#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

using namespace std;

struct cus
{
    int a;
    bool b;
}ab[501];

bool cmp(cus a1, cus a2)
{
    return (a1.a< a2.a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int array[n];
        bool ans= true, od=0, zd=0;

        FOR(i, n, 1)
        {
            cin>>array[i];
            ab[i].a= array[i];
        }
        FOR(i, n, 1)
        {
            // cout<<array[i]<<"\t";
            cin>> ab[i].b;
            if(ab[i].b==0) zd=1;
            if(ab[i].b==1) od=1;
        }

        FOR(i, n-1, 1)
        {
            if(array[i]>array[i+1])
            {
                // cout<<"hi\n";
                ans= false;
                break;
            }
        }
        if(!ans)
        {
            if(od && zd) ans=true;
        }
        // cout<<zd<<" "<<od<<"\n";

        if(ans) cout<< "Yes\n";
        else cout<<"No\n";
    }
}