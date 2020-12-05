#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll x, an=0, c=0;
        cin>> x;
        // cout<<x;
        int p=1;
        for(ll i=1; ;i=(1LL<<p)-1)
        {
            // cout<<i<<"\n";
            an+=((i+1)*i)/2;
            if(an>x) break;
            else c++;
            p++;
        }
        cout<< c<< "\n";
    }
}