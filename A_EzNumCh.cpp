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

int d[10000001];


long long div(int i)
{
    if(d[i]);
    else
    {
        for(int j=1; j<=sqrt(i); j++)
        {
            if(!(i%j))
            {
                if(j*j!=i) d[i]+=2;
                else d[i]++;
            }
        }
    }
    // cout<<i<<"\t"<<d[i]<<"\n";
    return d[i];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    d[1]= 1;
    int a, b, c, sum= 0;
    cin>> a>> b>> c;

    for(int i=2; i<=a*b*c; i++)
        d[i]= 0;

    for(int i=1; i<=a; i++)
        for(int j=1; j<=b; j++)
            for(int k=1; k<=c; k++)
                sum+=div(i*j*k)%1073741824;

    cout<<sum<<"\n";
}