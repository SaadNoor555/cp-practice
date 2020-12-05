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
typedef unsigned long long int  uint64;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n, m, ans= 0;
        cin>> n>> m;
        int mat[n][m];

        FOR(i, n, 1)
            FOR(j, m, 1)
                cin>> mat[i][j];

        for(int i= 1; i<m; i++)
        {
            int zc=0;
            int oc=0;
            for(int j= 0; j<=i; j++)
            {
                if(mat[j][i-j]==0) zc++;
                else oc++;
            }
            
            ans+=min(zc,oc);
        }
        cout<<ans<<"\n";
    }

}