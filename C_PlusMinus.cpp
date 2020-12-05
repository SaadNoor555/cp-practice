#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<cstring>

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
        string s;
        cin>> s;
        int l= s.length();
        long long a[l], p= 0, an= l, nc[2000001], min= 1000001;
        memset(nc, 0 , 2000001);
        for(int i=0; i<l; i++)
        {
            if(s[i]=='+') a[i]= p+1;
            else a[i]= p-1;
            p= a[i];
            if(p<min) min= p;

            if(p<0)
                if(!nc[-1*p]) 
                    nc[-1*p]= i+1;
        }
        min*=-1;
        for(int i=1; i<=min; i++)
            an+=nc[i];

        cout<< an<< "\n";

    }
}