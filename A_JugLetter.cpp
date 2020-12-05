#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        string s[n];
        int c[30];
        bool ans= true;
        for(int i=0; i<30; i++) c[i]= 0;
        for(int i=0; i<n; i++)
        {
            cin>> s[i];
            for(int j=0; j<s[i].length(); j++)
                c[s[i][j]-'a']++;
        }

        // for(int i=0; i<30; i++) cout<< c[i]<< " ";
        // cout<< "\n";
        for(int i=0; i<30; i++)
        {
            if(c[i] && c[i]%n)
            {
                // cout<< i<<"\n";
                ans= false;
                break;
            }
        }
        if(ans) cout<< "YES\n";
        else cout<< "NO\n";
    }
}