#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include <cstring> 

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

void clone(int *w, int *a)
{
    for(int i=1; i<=101; i++)
        a[i]= w[i];
}

int solve(int *a, int l)
{
    int c= 0;
    for(int i= 1; i<l; )
    {
        // cout<<l<<"\n";
        // cout<<a[i]<<".\n";
        if(a[i] && a[l-i])
        {
            if(i==l-i && a[i]<2) 
            {
                i++;
                continue;
            }
            c++;
            a[i]--;
            a[l-i]--;
            if(!a[i]) i++;
        }
        else i++;
        // cout<<i<<"\n";
        // if(a[i]<2) i++;
    }
    // cout<<l<<".."<<c<<"\n";
    return c;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n, tem, mini= 51, maxa= 0;
        cin>> n;
        // cout<<"hi";
        int w[101], a[101];
        FOR(i, 101, 1) w[i]= 0;

        FOR(i, n, 1)
        {
            cin>> tem;
            mini= min(mini, tem);
            w[tem]++;
        }

        for(int i= 2*mini; i<=2*n; i++)
        {
            clone(w, a);
            maxa= max(solve(a, i), maxa);
        }

        cout<< maxa<< "\n";
    }
}