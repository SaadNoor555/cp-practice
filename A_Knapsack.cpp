#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

bool cmp(pair<ll, int>a, pair<ll, int>b)
{
    return a.first>b.first;
}

int main()
{
    int t=1;
    cin>> t;
    while(t--)
    {
        ll n, wt, tmp, c=0;
        cin>> n>> wt;
        vector<ll>ans;
        vector<pair<ll, int>> w;

        for(int i=0; i<n; i++)
        {
            cin>> tmp;
            w.push_back({tmp, i});
        }
        sort(w.begin(), w.end(), cmp);

        for(int i=0; i<n; i++)
        {
            if(w[i].first+c<=wt)
            {
                c+=w[i].first;
                ans.push_back(w[i].second);
            }
            if(c>=wt/2+wt%2) break;
        }

        if(ans.empty() || c<wt/2+wt%2) cout<< "-1\n";
        else
        {
            cout<< ans.size()<<"\n";
            for(int i=0; i<ans.size(); i++)
                cout<< ans[i]+1<< " ";

            cout<< "\n";
        }
    }
}