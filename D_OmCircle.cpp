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
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, minp, minn= INT64_MAX;
    cin>> n;

    ll a[n], sum= 0;
    for(int i= 0;i<n; i++)
    {
        cin>> a[i];
        if(a[i]<minn)
        {
            minn= a[i];
            minp= i;
        }
        sum+=a[i];
    }
    // cout<<minp<<"\n";
    sum-=minn;
    // int i, j;
    // minp<(n-1)?  i=minp+1 : i=0;
    // minp>0? j=minp-1 : j= n-1;

    if(n==1) sum= a[0];
    // for(int x=0;x<n/2; x++)
    // {
    //     // cout<<i<<" "<< j<<"\n";
    //     sum+= a[i]+a[j];
    //     i<(n-1)? i++ : i=0;
    //     j>0? j-- : j= n-1;
        
    // }
    cout<< sum<< "\n";
}