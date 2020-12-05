#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int n;
ll ans=0;
string s;
int oc[100005];
const ll mod= 1000000007;


int main()
{
    int tc=1;
    // cin>> tc;

    while(tc--)
    {
        int od=0;
        cin>> n>> s;
        for(int i=n-1; i>=0; i--)
        {
            if((s[i]-'0')%2 && (s[i]-'0')%5) od++;
            oc[i]= od;
        }

        for(int i=0; i<n; i++)
        {
            ans+=n-i-oc[i];
            ans%=mod;
            // cout<< ans<< "\n";
        }
        // if(s[n-1]%2==0 || s[n-1]%5==0) ans++;
        cout<< ans+1<< "\n";
    }
}
