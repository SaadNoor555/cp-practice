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

bool checkrate(long long a, long long b, long long c)
{
    if(a*b<=1000000000)
    {
        long long d= a*b;
        if(d<=c) return true;
        else return false;
    }
    else
    {
        long long d;
        if(!(c%b)) d= c/d;
        if(d>=a) return true;
        else return false;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        long long an1= -1, an2= -1;
        long long a, b, c;
        cin>> a>> b>> c;
        
        if(a<c)
            an1= 1;

        if(c<a*b)
            an2= b;
 
        cout<< an1<< " "<< an2<< "\n";
    }
}