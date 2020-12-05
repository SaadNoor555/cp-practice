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

int a[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n, k, z, maxm= 0, s=0, ans= 0;
        cin>> n>> k>> z;
        FOR(i, n, 1)
            cin>> a[i];

        for(int i=0; i<=k; i++)
        {
            s+=a[i];
            if(i<n)maxm= max(maxm, a[i]+a[i+1]);
            ans= max(ans, min((k-i)/2, z)*maxm+s);
        }
        cout<< ans<< "\n";
    }
}