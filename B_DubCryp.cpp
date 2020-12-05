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
    while(t--)
    {
        ll l, r;
        ll m;
        cin>> l>> r>> m;
        int d= r-l;
        for(ll i=l; i<=r; i++)
        {
            if(m>i && m%i<=d)
            {
                cout<< i<< " "<< r<< " "<< r-(m%i)<<"\n";
                break;
            }
            else if(m>i && (i*((m/i)+1))-m<=d)
            {
                cout<<i<< " "<< l<< " "<< l+i*((m/i)+1)-m<<"\n";
                break;
            }
            else if(m%i<=d)
            {
                cout<< i<< " "<< i<< " "<< 2*i-m<<"\n";
                break;
            }
        }
    }
}