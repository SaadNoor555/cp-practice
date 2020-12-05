#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include <numeric>
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

ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--)
    {
        ll n, p, n1=1;
        bool pr= false;
        cin>> n;
        p= sqrt(n);

        for(ll i= 2; i<=p+1; i++)
        {
            if(!(n%i))
            {
                cout<< n/i<< " "<< n-n/i<<"\n";
                pr= true;
                break;
            }
        }
        if(!pr) cout<< "1 "<< n-1<< "\n";
    }
    
}