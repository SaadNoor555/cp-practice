#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<queue>

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
        ll n, k, tem, x= 0;
        cin>> n>> k;
        vector<ll> a;
        for(int i=0; i<n; i++)
        {
            cin>> tem;
            a.push_back(tem%k==0LL? tem%k: k-tem%k);
        }
        sort(a.begin(), a.end());
        int s= 1;
        for(int i=1; i<n; i++)
        {
            if(a[i]== a[i-1] && a[i]) a[i-1]+=k*s++;
            else s= 1;
        }
        sort(a.begin(), a.end());
        for(int i=n-1; i>0; i--)
            x+= a[i]-a[i-1];
        x+=a[0];

        if(!x) cout<<0<<"\n";
        else cout<< x+1<<"\n";
        
        // else cout<< x+1<<"\n";
    }
}