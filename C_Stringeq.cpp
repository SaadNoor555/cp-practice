#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int tc=1;
    cin>> tc;

    while(tc--)
    {
        int n, k;
        cin>> n>> k;
        string sr, sd;
        cin>> sr>> sd;
        int r[30], d[30];
        memset(r, 0, sizeof r);
        memset(d, 0, sizeof d);

        for(auto i: sr)
            r[i-'a']++;

        for(auto i: sd)
            d[i-'a']++;

        for(int i=0; i<26; i++)
        {
            int m= min(r[i], d[i]);
            r[i]-=m;
            d[i]-=m;
        }

        for(int i=0; i<26; i++)
        {
            if(r[i] && !(r[i]%k))
            {
                // cout<< (char)('a'+i)<<" hi\n";
                for(int j=i+1; j<26; j++)
                {
                    if(!(d[j]%k))
                    {
                        int m= min(r[i], d[j]);
                        r[i]-=m;
                        d[j]-=m;
                        // cout<< r[i]<< " "<< d[j]<< "\n";
                        if(r[i]<k) break;
                    }
                    
                }
            }
        }
        bool flag=0;
        for(int i=0; i<26; i++)
        {
            if(r[i]) flag=1;
        }

        if(flag) cout<< "No\n";
        else cout<< "Yes\n";
    }
}
