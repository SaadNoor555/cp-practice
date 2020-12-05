#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include <sstream> 

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

    long long an, bn, tot;

    string a, b, t;
    cin>> an>> bn;
    tot= an+bn;

    a= to_string(an);
    b= to_string(bn);
    t= to_string(tot);

    a.erase(remove(a.begin(), a.end(), '0'), a.end());
    b.erase(remove(b.begin(), b.end(), '0'), b.end());
    t.erase(remove(t.begin(), t.end(), '0'), t.end());

    stringstream ac(a);
    stringstream bc(b);
    stringstream tc(t);

    long long az= 0, bz= 0, tz= 0;
    ac>> az;
    bc>> bz;
    tc>> tz;

    if((az+bz)==tz) cout<<"YES\n";
    else cout<<"NO\n";
}