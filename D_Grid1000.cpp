#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n, k;
        cin>> n>> k;
        int ck= k;
        int a[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                a[i][j]=0;
        for(int i=0; i<n; i++)
        {
            if(!k) break;
            for(int j=0; j<n-i; j++)
            {
                if(!k) break;
                a[j][j+i]= 1;
                k--;
            }
            for(int j=n-i; j<n; j++)
            {
                if(!k) break;
                a[j][j-n+i]= 1;
                k--;
            }
        }
        int ans= 0;
        if(ck>n && ck%n) ans=2;
        else if(ck && ck<n) ans= 2;
        cout<< ans<< "\n";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<< a[i][j];

            cout<<"\n";
        }
    }
}