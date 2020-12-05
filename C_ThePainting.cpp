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

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;

    cin>> n;

    long long sr= sqrt(n);
    long long fac= n;
    for(long long i=2; i<=sr; i++)
    {
        if(!(n%i))
        {
            fac= __gcd(fac, i);
            fac= __gcd(fac, n/i);
        }
        if(fac== 1)
            break;
    }


    cout<< fac<< "\n";
    
}