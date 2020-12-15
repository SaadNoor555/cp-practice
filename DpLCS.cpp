#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

template<typename T>
// complexity n*m, returns length of LCS of a & b
T LCS(string a, string b, T n, T m)
{
    T dp[n+1][m+1];
    memset(dp, 0, sizeof dp);

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(!i || !j)
                dp[i][j]= 0;
            else if(a[i-1]==b[j-1])
                dp[i][j]= dp[i-1][j-1]+1;
            else
                dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][m];
}

template<typename T>
//does not require LCS function
string LCSprint(string a, string b, T n, T m)
{
    T dp[n+1][m+1];
    memset(dp, 0, sizeof dp);

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(!i || !j)
                dp[i][j]= 0;
            else if(a[i-1]==b[j-1])
                dp[i][j]= dp[i-1][j-1]+1;
            else
                dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
        }
    }
    string ans= "";
    int i=n, j=m;
    while(i>0 && j>0)
    {
        if(a[i-1]==b[j-1])
        {
            ans+=a[i-1];
            i--, j--;
        }

        else if(dp[i-1][j]>dp[i][j-1])
            i--;
        else
            j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int t=1, cs=0;
    // cin>> t;
    while(t--)
    {
        cs++;
        string a, b;
        cin>> a>> b;
        // cout<< LCS<int>(a, b, a.length(), b.length())<< '\n';
        cout<< LCSprint<int>(a, b, a.length(), b.length())<< '\n';
    }
}