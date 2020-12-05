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
        ll n;
        ll nc= 0, c=0;
        cin>> n;
        for(;;)
        {
            if(n==1) break;
            if((n%6)==0) n/=6, nc= 0;
            else
            {
                n*=2;
                nc++;
                if(nc==3) break;
            }
            c++;
            
        }
        if(n==1) cout<< c<< "\n";
        else cout<< -1<< "\n";
    }
}