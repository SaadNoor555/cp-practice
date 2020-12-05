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
    for(int p=0; p<t; p++)
    {
        int n;
        cin>> n;
        ll a[n], b[n], ans= 0;
        ll mina= 1000000005, minb= 1000000005;
        FOR(i, n, 1)
        {
            cin>> a[i];
            if(mina<a[i]) mina= a[i];
        }

        FOR(i, n, 1)
        {
            cin>> b[i];
            if(minb<b[i]) minb= b[i];
        }

        FOR(i, n, 1)
            ans+= max((a[i]-mina), (b[i]-minb));

        cout<< ans<< "\n";
    }
}