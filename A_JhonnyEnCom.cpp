#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int tc=1;
    cin>> tc;

    while(tc--)
    {
        ll a, b;
        cin>> a>> b;
        // ll c=a/b;
        if((a%b==0||b%a==0) && __builtin_popcountll(max(a,b)/min(a,b))==1)
        {
            // cout<<b/a<<"\n";
            ll x=__builtin_ctzll(max(a,b)/min(a,b));
            ll ans= x/3+(x%3)/2+((x%3)%2)/1;
            cout<<ans<< "\n";
        }
        else cout<< "-1\n";
    }
}
