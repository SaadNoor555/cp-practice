#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

template<typename B>
bool knapsackBit(B* a, B n, B wt)
{
    //update size of MAX
    const int MAX= 10;
    bitset<MAX> kp;
    kp[0]= 1;

    for(int i=0; i<n; i++)
        kp|=kp<<a[i];

    return kp[wt];
}

template<typename A>
//aw= weight, av= value/profit, n= size, wt= req weight
//A= Value type, B= weight type
ll knapsack(vector<A> aw, vector<A> av, A n, A wt)
{
    ll dp[n+2][wt+2];
    ll maxm= 0;
    memset(dp, 0, sizeof dp);
    // dp[0][0]= 1;

    for(int idx=n-1; idx>=0; idx--) 
        for(int j=0; j<=wt; j++)
        {
            //if j-aw[idx]<0, we dont take the knapsack. 
            if(j-aw[idx]>=0)dp[idx][j]= max((dp[idx+1][j-aw[idx]]+av[idx]), dp[idx+1][j]);
            maxm= max(maxm, dp[idx][j]);
        }

    return maxm;
}

int main()
{
    int t, cs=0;
    int n, w;
    cin>> n>> w;
    ll t2, t1;
    vector<ll> wt;
    vector<ll> val;
    for(int i=0; i<n; i++)
    {
        cin>> t1>> t2;
        wt.push_back(t1);
        val.push_back(t2);
    }
    cout<< knapsack<ll>(wt, val, n, w)<< "\n";
}