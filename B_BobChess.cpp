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
    t= 1;
    while(t--)
    {
        int n, m, sx, sy;
        cin>> n>> m>> sx>> sy;
        for(int i=sx; i<=n; i++)
        {
            for(int j=sy; j<=m; j++)
            {
                cout<< i<< " "<< j<< "\n";
            }
            for(int j=1; j<sy; j++)
            {
                cout<< i<< " "<<j<< "\n";
            }
            if(sy-1)sy--;
            else sy= m;
        }
        for(int i=1; i<sx; i++)
        {
            for(int j=sy; j<=m; j++)
            {
                cout<< i<< " "<< j<< "\n";
            }
            for(int j=1; j<sy; j++)
            {
                cout<< i<< " "<<j<< "\n";
            }
            if(sy-1)sy--;
            else sy= m;
        }

    }
}