#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

map<char, ll> g;

int main()
{
    int tc=1, cn=0;
    cin>> tc;

    while(tc--)
    {
        int m;
        cin>> m;
        
        // memset(g, 0, sizeof g);
        vector<pair<char, ll>> ans;
        ll a;
        char b, pb;
        for(int i=0; i<m; i++)
        {
            cin>> a>> b;
            if(i && pb!=b) 
            {
                ans.push_back({pb, g[pb]});
                g.clear();
            }
            g[b]+=a;

            if(i==m-1) ans.push_back({b, g[b]});
            pb= b;
        }
        cout<< "Case "<< ++cn<< ":\n";
        for(auto x: ans)
        {
            cout<< x.second<< " "<< x.first<< "\n";
        }

        g.clear();
        ans.clear();
    }
}
