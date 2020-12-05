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
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        long long a[n], c=0;
        for(int i=0; i<n; i++)
            cin>> a[i];

        for(int i=0; i<n; i++)
        {
            if(a[i]==1) c++;
            else break;
        }

        if(c==n)
        {
            if((c%2)==0) cout<< "Second";
            else cout<<"First";
        }
        else
        {
            if((c%2)==0) cout<<"First";
            else cout<<"Second";
        }
        cout<< "\n";
    }
}