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

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, mx= 0, temp= 0;
    cin>> n;
    int ar1[n], ar2[n];
    vector <int>a1, a2;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>> a;
        a1.push_back(a);
    }
    for(int i=0; i<n; i++)
    {
        cin>> a;
        a2.push_back(a);
    }
    
    cout<<mx<<"\n";
}