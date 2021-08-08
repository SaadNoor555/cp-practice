#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

template<typename T>
T LIS(vector<T>ar, T n)
{
    T mx=0, MAX=INT32_MAX;
    vector<T>dp(n+1, MAX);
    dp[0]= -MAX;

    for(int i=0; i<n; i++)
    {
        T j= upper_bound(dp.begin(), dp.end(), ar[i])-dp.begin();
        if(dp[j-1]<ar[i] && dp[j]>ar[i])
        {
            mx= max(mx, j);
            dp[j]= ar[i];
        }
    }
    for(int i=1; i<=mx; i++)
        cout<< dp[i]<< ' ';
    cout<<'\n';
    return mx;
}

template<typename T>
vector<T> LISPrint(vector<T>a, T mx)
{
    
}

int main()
{
    int t= 1, cs=0;
    // cin>> t;
    while(t--)
    {
        cs++;
        vector<int>a;
        int n, tmp;
        cin>> n;
        for(int i=0; i<n; i++)
        {
            cin>> tmp;
            a.push_back(tmp);
        }
        // vector<int>ans= LISPrint<int>(a, a.size());

        // for(auto x: ans)
        //     cout<< x<< ' ';
        cout<< LIS<int>(a, a.size());
        cout<< '\n';
    }
}