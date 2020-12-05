#include<bits/stdc++.h>

#define MOD 998244353

typedef long long ll;

using namespace std;

ll power(ll a, ll b)
{
    ll ans= 1;
    while(b)
    {
        if(b&1) ans=ans*a%MOD;
        a=a*a%MOD;
        b>>=1;
    }
    return ans%MOD;
}

int main()
{
    int tc=1;
    // cin>> tc;

    while(tc--)
    {
        int n;
        cin>> n;
        ll a[n], b[n], sm=0;

        for(int i=0; i<n; i++) cin>> a[i];
        for(int i=0; i<n; i++) cin>> b[i];

        sort(a, a+n);
        sort(b, b+n, greater<int>());

        for(int i=0; i<n; i++) sm+=abs(a[i]-b[i]), sm%=MOD;
        sm%=MOD;
        // cout<<sm<< "\n";
        vector<ll> fac(2*n+1, 1);
        for(int i=1; i<=2*n; i++) fac[i]= (i*fac[i-1])%MOD;
        
        ll x= power((fac[n]*fac[n])%MOD, MOD-2);
        x= (x%MOD * fac[2*n]%MOD)%MOD;
        cout<< (sm*x)%MOD<< "\n";
    }
}
