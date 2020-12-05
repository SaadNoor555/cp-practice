#include<iostream>
#include<bits/stdc++.h>
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
        ll n, m, t1;
        bool pr= true;
        cin>> n>> m;
        int a[1005], b[1005];
        for(int i=0; i<1005; i++)
        {
            a[i]=0;
            b[i]=0;
        }
        FOR(i, n, 1)
        {
            cin>> t1;
            a[t1]++;
        }

        FOR(i ,m , 1)
        {
            cin>> t1;
            b[t1]++;
        }

        for(int i=1; i<=1000; i++)
        {
            if(a[i] && b[i])
            {
                cout<< "YES\n";
                cout<< 1<< " "<< i<< "\n";
                pr= false;
                break;
            }
        }
        if(pr) cout<<"NO\n";
    }
}