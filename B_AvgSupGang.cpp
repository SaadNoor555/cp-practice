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
    
    int n, k, m;
    cin>> n>> k>> m;
    double a[n];

    FOR(i, n, 1)
        cin>> a[i];

    sort(a, a+n, greater<int>());
    if(m>=n)
        printf("%lf\n",(a[0]+min((m-n+1), k)));
        // cout<< (double)(a[0]+min((m-n), k))<<"\n";

    else
    {
        double ad= 0;
        double co= 0;
        for(int i=0; i<n-m; i++)
        {
            ad+=a[i];
            co++;
        }
        double an= ad/co;
        for(int i=n-m; i<n; i++)
   
   
        {
            ad+=(a[i]+1);
            an=max(an,(ad/++co));
        }
        printf("%lf\n",an);
        // cout<< (double)ad/co<<"\n";
    }
}