#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include <cstdlib>

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
    int t,d;
    cin>> t;

    for(int i=0; i<=2*t; i++)
    {
        if(i<=t) d= i;
        else d--;

        for(int j=0; j<abs(t-i); j++) cout<<"  ";
        for(int j= 0;j<=d; j++)
        {
            if(!d)cout<< j<< "\n";
            else cout<< j<< " ";
        }
        for(int j=d-1; j>=0; j--)
        {
            if(j!=0)cout<< j<< " ";
            else cout<< j<< "\n";
        }
    }
}