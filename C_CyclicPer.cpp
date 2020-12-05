#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back
#define MAX 1000000007;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

using namespace std;

ll fac(ll n)
{
    ll c=1;
    for(int i=1; i<=n; i++)
    {
        c*=i;
        c=c%MAX;
    }
    return c;
}

ll twop(ll n)
{
    ll c= 1;
    for(int i=1; i<n; i++)
    {
        c*=2;
        c=c%MAX;
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    t=1;
    while(t--)
    {
        int n;
        cin>> n;
        
        ll f= fac(n), tp= twop(n);
        if(f<tp) 
            cout<<f-tp+1000000007<<"\n";
        else cout<<f-tp<< "\n";
    }
}