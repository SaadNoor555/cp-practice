#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstring>
 
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
    while(t--)
    {
        int n, tem, maxm=0, c=0, p=0;
        cin>> n;
        int qt[100001], fqt[100001];
        FOR(i, 100001, 1)
        {
            qt[i]=0;
            fqt[i]=0;
        }
        FOR(i, n, 1)
        {
            cin>> tem;
            qt[tem]++;
        }
        for(int i=1; i<n+1; i++)
        {
            fqt[qt[i]]++;
            maxm= max(qt[i], maxm);
        }
        // cout<< maxm<<"\n";
        for(int i=1; i<maxm; i++)
            p+=(fqt[i]*i);
 
        c+= p/(maxm-1);
        c+= fqt[maxm]-1;
        cout<< c<< "\n";
    }
}