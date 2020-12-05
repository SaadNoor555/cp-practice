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
    int t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        ll a[n];
        FOR(i, n, 1)
            cin>> a[i];

        if(a[0]+a[1]>a[n-1]) cout<< "-1\n";
        else cout<< "1 2 "<<n<< "\n";
    }
}