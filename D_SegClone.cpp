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

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

using namespace std;

ll solve(ll n, ll l1, ll l2, ll r1, ll r2, ll rem, ll ins)
{
    if(l1==l2 && r1== r2) return rem*2;
    else
    {
        ll fs= max(r1, r2)-min(l1, l2)-ins;
        if(n*fs>=rem)
            return rem;

        else
            return (n*fs)+((rem-(n*fs))*2);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        ll n, k, l1, r1, l2, r2, ans= 0;
        cin>> n>> k;
        cin>>l1>>r1>>l2>>r2;
        ll ins= min(r1, r2)- max(l1, l2);
        if(ins>=0)
        {
            ll rem= k-(n*ins);
            if(rem<=0) ans= 0;
            else ans= solve(n, l1, l2, r1, r2, rem, ins);
        }
        else
        {
            ll rs= -1*ins;
            ll vis= max(r1, r2)-min(l1, l2);
            if(r1<l2) l2= r1;
            else l1= r2;
            ans= INT64_MAX;
            for(int i=1; i<=n; i++)
            {
                ll p= solve(i, l1, l2, r1, r2, k, 0)+(rs*i);
                ans= min(ans,p);
            }
        }

        cout<<ans<<"\n";
    }
}