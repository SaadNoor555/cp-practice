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

vector<ll> pf;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long q, c=0;
    cin>> q;
    for(ll i=2; i*i<=q; i++)
    {
        while(!(q%i))
        {
            q/=i;
            pf.push_back(i);
        }
    }
    // cout<< q<<"\n";
    if(q!=1) pf.push_back(q);
    c= pf.size();
    if(c<=1) cout<< "1\n0\n";
    ELIF(c==2) cout<< "2\n";
    else cout<< 1<<"\n"<< pf[0]*pf[1]<<"\n";
}