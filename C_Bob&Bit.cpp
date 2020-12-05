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
        int n, m;
        cin>> n>> m;
        ll a[n], b[m];

        FOR(i, n, 1) cin>> a[i];
        FOR(i, m, 1) cin>> b[i];

        sort(a, a+n, greater<int>());
        sort(b, b+m);
    }
}