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
    
    int n, s, t, c=0;
    cin>> n>> s>> t;
    int p[n];
    bool v[n], br= true;

    for(int i=1; i<=n; i++)
    {
        cin>> p[i];
        v[i]= false;
    }

    while(n--)
    {
        if(s==t) break;
        v[s]= true;
        s= p[s];
        if(v[s])
        {
            br= false;
            break;
        }
        c++;
    }
    if(br) cout<< c<< "\n";
    else cout<<"-1\n";
}