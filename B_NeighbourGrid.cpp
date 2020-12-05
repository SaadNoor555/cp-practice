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
        int n, m;
        cin>> n>> m;
        int a[n][m];
        bool pr= true;
        FOR(i, n, 1)
            FOR(j, m, 1)
            {
                cin>> a[i][j];
                if((i==0 && j==0) || (i==n-1 && j==0) || (i==0 && j==m-1) || i==n-1 && j==m-1)
                {
                    if(a[i][j]<=2) a[i][j]= 2;
                    else pr= false;
                }
                else if(i==0 || j==0 || i==n-1 || j==m-1)
                {
                    if(a[i][j]<=3) a[i][j]= 3;
                    else pr= false;
                }
                else
                {
                    if(a[i][j]<=4) a[i][j]= 4;
                    else pr= false;
                }
                
            }

        if(pr)
        {
            cout<<"YES\n";
            FOR(i, n, 1)
            {
                FOR(j, m, 1)
                    cout<<a[i][j]<< " ";

                cout<< "\n";
            }         
        }
        else cout<<"NO\n";
        
    }
}