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
        int n, m, c=0;
        cin>> n>> m;
        string grid[n];
        FOR(i, n, 1)
            cin>> grid[i];

        for(int i=0; i<n-1; i++)
        {
            if(grid[i][m-1]!='D') c++;
        }
        for(int i= 0; i<m-1; i++)
            if(grid[n-1][i]!='R') c++;

        if(grid[n-1][m-1]!='C') c++;

        cout<< c<< "\n";
    }
}