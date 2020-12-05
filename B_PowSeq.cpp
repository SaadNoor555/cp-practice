#include<bits/stdc++.h>

#define ll long long

using namespace std;
ll ans= INT64_MAX;
ll cpow(int pow, int n, ll *a)
{
    ll sum= 0, p=1;
    for(int i=0; i<n; i++)
    {
        sum+=abs(a[i]-p);
        p*=pow;
        if(sum>ans) 
        {
            sum= INT64_MAX;
            break;
        }
    }
    return sum;
}

int main()
{
    ll t;
    t= 1;
    while(t--)
    {
        int n;
        cin>> n;
        ll a[n];
        for(int i=0; i<n; i++) cin>> a[i];

        sort(a, a+n);

        for(int i=1; ; i++)
        {
            ll cp= cpow(i, n, a);
            if(ans<cp)
                break;

            else ans= cp;
        }

        cout<< ans<< "\n";
    }
}