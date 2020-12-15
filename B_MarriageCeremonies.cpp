#include<bits/stdc++.h>

#define CASE(cnt, ans) cout<< "Case "<< cnt<< ": "<< ans<< '\n';
typedef long long ll;

using namespace std;

ll dp[17][(1<<17)];
vector<int> a[17];

ll f(int idx, int mask, int n)
{
    if(idx>=n) return 0;
    if(dp[idx][mask]!=-1) return dp[idx][mask];
    ll ref= -1;
    for(int i=0; i<n; i++)
    {
        bool val= (mask&(1<<i));
        if(!val)
            ref= max(a[idx][i]+f(idx+1, mask|(1<<i), n), ref);
    }

    dp[idx][mask]= ref;
    return ref;
}

int main()
{
    int t=1, cs=0;
    cin>> t;
    while(t--)
    {
        cs++;
        int n, t1;
        cin>> n;
        memset(dp, -1, sizeof dp);
        for(int i=0; i<n; i++)
            a[i].clear();
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                cin>> t1;
                a[i].push_back(t1);
            }

        CASE(cs, f(0, 0, n));
    }
}