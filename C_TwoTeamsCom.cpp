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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;

    while(t--)
    {
        int n, dis= 0, maxn= 0;
        cin>> n;

        int a[n+1], con[n+1];
        bool s[n+1];

        FOR(i, n+1, 1)
        {
            con[i]= 0;
        }

        FOR(i, n, 1)
        {
            cin>> a[i];
            if(!con[a[i]])
            {
                dis++;
            }

            con[a[i]]++;
            if(maxn<con[a[i]]) maxn= con[a[i]];
        }

        // cout<<dis<<"\t"<<maxn<<endl;
        if(maxn>dis) cout<<dis<<"\n";
        else if(maxn==dis) cout<< maxn-1<<"\n"; 
        else cout<<maxn<<"\n";
        // cout<< min(maxn, dis-1)<<"\n";
    }
}