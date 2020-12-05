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
    
    int a, b, c, d, n1, n2;
    ll an= 0, ans= 0;
    cin>> a>> b>> c>> d;

    for(int i=a; i<=b; i++)
    {
        if(i+b>=c)
        {
            an= i+b-c;
            n1= b;
            n2= min(ll(c-b), d-an)+1;
        }
        else
        {
            an= 0;
            n1= c-i;
            n2= min(c ,d)+1;
        }
        ans+=0;
    }

}