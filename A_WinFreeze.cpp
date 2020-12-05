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
 
void primeFactoriz(long long n)
{
    ll l= sqrt(n);
    for(ll i=2; i<=l; i++)
    {
        if(!(n%i))
        {
            pf.push_back(i);
            primeFactoriz(n/i);
            return;
        }
    }
    pf.push_back(n);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long q, c=0, an=0;
    cin>> q;
    primeFactoriz(q);
    c= pf.size();
    // cout<< c<< "\n";
    // an= q/pf[0];
    // if(an==1) an--;
    // if(!(c%2)) cout<< "2\n";
    // else cout<< 1<< "\n"<< an<< "\n";
    if(c==2 && q>1) cout<< "2\n";
    else
    {
        cout<< "1\n";
        c==1? cout<< "0\n": cout<< q/pf[0]<< "\n";
    }
}