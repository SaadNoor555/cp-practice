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
    
    int t;
    cin>> t;
    while(t--)
    {
        long long n, x, m, c=0;
        cin>> n>> x>> m;
        long long l, r, gs= x, gf= x;
        FOR(i, m, 1)
        {
            cin>> l>> r;
            if(l<=gf && r>=gs)
            {
                if(l<gs) gs= l;
                if(r>gf) gf= r;
            }
        }
        cout<< gf-gs+1<<"\n";;
    }
}