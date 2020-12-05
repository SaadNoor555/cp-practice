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
        int n, m, c=0;
        cin>> n>> m;
        int a[n][m];
        FOR(i, n, 1)
        {
            FOR(j, m, 1)
            {
                cin>> a[i][j];
            }
        }

        FOR(i, n, 1)
        {
            FOR(j, m, 1)
            {
                if(a[i][j]==1)
                {
                    FOR(k, m, 1)
                        if(!a[i][k])a[i][k]= 2;

                    FOR(l, n, 1)
                         if(!a[l][j])a[l][j]= 2;
                }
            }
        }

        // FOR(i, n, 1)
        // {
        //     FOR(j, m, 1)
        //         cout<< a[i][j]<<" ";

        //     cout<< "\n";
        // }

        FOR(i, n, 1)
        {
            FOR(j, m, 1)
            {
                if(!a[i][j])
                {
                    c++;
                    for(int p= i; p<n; p++)
                        a[p][j]= 2;
                    break;
                }
            }
        }
        //         FOR(i, n, 1)
        // {
        //     FOR(j, m, 1)
        //         cout<< a[i][j]<<" ";

        //     cout<< "\n";
        // }
        if(c%2) cout<<"Ashish\n";
        else cout<<"Vivek\n";
    }
}