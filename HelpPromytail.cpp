
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

using namespace std;

int main()
{

    int t;
//cin>>t;

//while(t--){
    int h,w;
    cin>>h>>w;

    int a[h+1][w+1];

    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        cin>>a[i][j];
    }




    int dp[h+1][w+1];

    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(i==1)
                dp[i][j]=a[i][j];
            else
            {
                // if(j!=1){
                // dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]);
                // dp[i][j]=max(dp[i][j],dp[i-1][j+1]);
                // dp[i][j]+=a[i][j];
                // }

                if(j==w)
                {
                    dp[i][j]==max(dp[i-1][j-1],dp[i-1][j]);
                    dp[i][j]+=a[i][j];
                }
                else if(j==1)
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j+1]);
                    dp[i][j]+=a[i][j];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]);
                    dp[i][j]=max(dp[i][j],dp[i-1][j+1]);
                    dp[i][j]+=a[i][j];
                }
            }
        }
    }

    // for(int i=1;i<=h;i++){
    // for(int j=1;j<=w;j++){
    // cout<<dp[i][j]<<" ";
    // }
    // cout<<"\n";
    // }


    //}
}