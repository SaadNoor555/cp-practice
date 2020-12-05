#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

const ll MOD= 1000000007;
string grid[2005];

struct dp
{
    int val=0, x=0, y=0, z=0;
} dp[2005][2005];

int main()
{
    int h, w;
    cin>> h>> w;
    for(int i=0; i<h; i++)
        cin>> grid[i];

    dp[0][0]= {1, 0, 0, 0};
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            if((!i && !j) || grid[i][j]=='#') continue;
            if(i-1>=0) 
            {
                dp[i][j].val+= dp[i-1][j].val+dp[i-1][j].y;
                dp[i][j].y= dp[i-1][j].val+dp[i-1][j].y;
            }
            if(j-1>=0)
            {
                dp[i][j].val+= dp[i][j-1].val+dp[i][j-1].x;
                dp[i][j].x= dp[i][j-1].val+dp[i][j-1].x;
            }
            if(i-1>=0 && j-1>=0)
            {
                dp[i][j].val+= dp[i-1][j-1].val+dp[i-1][j-1].z;
                dp[i][j].z= dp[i-1][j-1].val+dp[i-1][j-1].z;
            }

            dp[i][j].val%=MOD;
            dp[i][j].x%=MOD;
            dp[i][j].y%=MOD;
            dp[i][j].z%=MOD;
        }
    }

    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
            cout<< dp[i][j].val<< " ";

        cout<<'\n';
    }
    cout<< dp[h-1][w-1].val<< "\n";
}