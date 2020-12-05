#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 2*acos(0.0)
#define PB push_back

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t;
    cin>> t;
    for(int i=1; i<=t; i++)
    {
        double r;
        cin>> r;
        cout<< "Case "<< i<<": ";
        printf("%.02f\n", (r*r)*(4-PI));
    }
}