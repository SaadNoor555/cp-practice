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

long long MaxSumSubarray(long long arr[], int n)
{
    if(n<1) return 0;
    long long maxSoFar= arr[0], z= 0;
    long long maxEnding= arr[0];

    for(int i=1; i<n; i++)
    {
        maxEnding= max(maxEnding+arr[i], arr[i]);
        maxSoFar= max(maxSoFar, maxEnding);
    }
    return max(maxSoFar, z);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        long long a[n], d1[n/1], d2[n/2+1], l1, l2, sum= 0;
        FOR(i, n, 1)
            cin>> a[i];

        for(int i=0; i<n-1; i+=2)
            d1[i/2]= a[i+1]-a[i];

        d2[0]= -9999999;
        sum+= a[0];
        for(int i=2; i<n; i+=2) 
        {
            d2[i/2]= a[i-1]-a[i];
            sum+=a[i];
        }

        l1= MaxSumSubarray(d1, n/2);
        l2= MaxSumSubarray(d2, n%2==0? n/2:  n/2+1);

        cout<<sum+max(l1, l2)<< "\n";
    }
}