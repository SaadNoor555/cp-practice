#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

template<typename T>
//order matters
//coins= coin array, n=size of array, val=required value
ll InfCoinSwapOrder(vector<T>coins, T n, T val)
{
    ll dp[val+5][n+5];
    memset(dp, 0, sizeof dp);

    for(int i=0; i<n; i++)
        dp[0][i]= 1;

    for(int sum=1; sum<=val; sum++)
        for(int idx=0; idx<n; idx++)
        {
            //x= if we take coin[idx], y= if we skip coin[idx]
            ll x= sum-coins[idx]>=0? dp[sum-coins[idx]][idx] : 0;
            ll y= idx? dp[sum][idx-1] : 0;
            dp[sum][idx]= x+y;
        }
        
    return dp[val][n-1];
}

template<typename T>
//order does not matter
ll InfCoinSwapUnorder(vector<T>coins, T n, T val)
{
    ll dp[val+5];
    memset(dp, 0, sizeof dp);
    dp[0]= 1;
    for(int i=0; i<=val; i++)
        for(int idx=0; idx<n; idx++)
            if(i+coins[idx]<=val)
                dp[i+coins[idx]]+=dp[i];

    return dp[val];
}

template<typename T>
//order matters
ll SingleCoinSwapOrder(vector<T> coins, T n, T val)
{
    ll dp[val+5];
    memset(dp, 0, sizeof dp);
    dp[0]= 1;

    /*we iterate over coins array first, and value from behind.
     so no elemnt is repeated*/
    for(int idx=0; idx<n; idx++)
        for(int sm=val; sm>=0; sm--)
        {
            if(sm-coins[idx]>=0) dp[sm]+=dp[sm-coins[idx]];
            else break;
        }

    return dp[val];
}

template<typename T>
//change the value of MAX coins required before use
ll MinCoinChange(vector<T>coins, T n, T val)
{
    MAX= 10001;
    ll dp[val+5];
    for(int i=1; i<val+5; i++)
        dp[i]= MAX;
    dp[0]= 0;
    sort(coins.begin(), coins.end());
    
    for(int sm=1; sm<=val; sm++)
        for(int idx=0; idx<n; idx++)
            if(sm-coins[idx]>=0) dp[sm]= min(dp[sm], dp[sm-coins[idx]]+1);

    if(dp[val]==MAX) dp[val]= -1;
    return dp[val];
}


int main()
{
    int n, m;
    vector<int> cn;
    cin>> n>> m;
    int t1;
    for(int i=0; i<m; i++)
    {
        cin>> t1;
        cn.push_back(t1);
    }

    // cout<< InfCoinSwapUnorder<int>(cn, m, n)<< '\n';
    // cout<< InfCoinSwapOrder<int>(cn, m, n)<< '\n';
    // cout<< MinCoinChange<int>(cn, m, n)<< '\n';
}