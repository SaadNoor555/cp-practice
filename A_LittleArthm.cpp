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
    int t;
    cin>> t;

    while(t--)
    {
        int n, m;
        cin>> n>> m;

        FOR(i, n, 1)
        {
            FOR(j, m, 1)
            {
                if(j==0) cout<<'B';
                ELIF(i<n-1) cout<<'W';
                else cout<<'B';
            }
            cout<< endl;
        }
    }
}