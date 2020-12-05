#include<bits/stdc++.h>

using namespace std;

int dp[5001][5001], n, m;
string a, b, ans= "";

void f()
{
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            if(a[i-1]==b[j-1]) dp[i][j]= dp[i-1][j-1]+1;
            else dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
        }

    int ns= n, nt= m;
    while(ns && nt)
    {
        // cout<< ns<< " "<< nt<< "\n";
        if(a[ns-1]==b[nt-1])
        {
            ans+=a[ns-1];
            ns--, nt--;
        }
        else
        {
            if(dp[ns-1][nt]>dp[ns][nt-1]) ns--;
            else nt--;
        }
    }
    reverse(ans.begin(), ans.end());
}

// void cal()
// {

// }

int main()
{
    cin>> n>> m;
    cin>> a>> b;
    f();
    cout<< ans<< '\n';
}