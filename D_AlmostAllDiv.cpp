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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n, tem;
        cin>> n;
        ll d[n];
        vector<ll> div;
        FOR(i, n, 1)
            cin>> d[i];
        sort(d, d+n);

        ll an= d[0]*d[n-1];
        ll p= sqrt(an);
        // cout<<p<<"\n";
        for(ll i= 2; i<=p; i++)
        {
            if(!(an%i))
            {
                if(an/i!=i)div.push_back(an/i);
                div.push_back(i);
            }
        }
        sort(div.begin(), div.end());

        // cout<<div.size()<<"\n";

        if(div.size()!=n) an= -1;
        else
            FOR(i, n, 1)
                if(d[i]!=div[i])
                {
                    an=-1;
                    break;
                }

        cout<< an<< "\n";

        
    }
}