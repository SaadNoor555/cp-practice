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
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while (t--)
    {
        int n, pos=0, neg= 0, zer= 0, j=0;
        cin>> n;
        ll a[n], b[n-1];
        FOR(i, n, 1)
            cin>> a[i];


        FOR(i, n, 1)
        {
            if(i%2) cout<< -abs(a[i])<< " ";
            else cout<< abs(a[i])<< " ";
        }
        cout<< "\n";
    }
    
}