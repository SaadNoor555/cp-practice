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
        ll r, g, b, w, tot, oc= 0, minm;
        cin>> r>> g>> b>> w;
        tot= r+g+b+w;

        if(r%2) oc++;
        if(g%2) oc++;
        if(b%2) oc++;
        if(w%2) oc++;

        
        
        if(oc<2 || oc==4) cout<< "Yes\n";
        else if(oc==3 && (r && b && g)) cout<< "Yes\n";
        else cout<<"No\n";
    }
}