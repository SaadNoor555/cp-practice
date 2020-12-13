#include<bits/stdc++.h>

#define MOD 1000000007
typedef long long ll;

using namespace std;

int main()
{
    int t, cs=0;
    cin>> t;
    while(t--)
    {
        cs++;
        ll n, m, k, w, t1, t2;
        cin>> n>> m>> k>> w;
        vector<ll> a, b;
        ll dpa[w+1], dpb[w+1];

        memset(dpa, 0, sizeof dpa);
        memset(dpb, 0, sizeof dpb);

        for(int i=0; i<n; i++)
        {
            cin>> t1;
            a.push_back(t1);
        }
        for(int i=0; i<m; i++)
        {
            cin>> t2;
            b.push_back(t2);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        dpa[0]=1, dpb[0]=1;
        for(int i=0; i<n; i++)
        {
            for(int j=w; j>=0; j--)
            {
                if(j-a[i]>=0) 
                {
                    dpa[j]+=dpa[j-a[i]];
                    dpa[j]%=MOD;
                }
                else break;
            }
        }

        for(int i=0; i<m; i++)
        {
            for(int j=w; j>=0; j--)
            {
                if(j-b[i]>=0) 
                {
                    dpb[j]+=dpb[j-b[i]];
                    dpb[j]%=MOD;
                }
                else break;
            }
        }
        ll ans=0;
        ll s=(w-k)/2+bool((w-k)%2), f= (w+k)/2;
        for(int i=s; i<=f; i++)
        {
            ans+= (dpa[i]*dpb[w-i])%MOD;
            ans%=MOD;
        }
        cout<< ans<< "\n";
    }
}