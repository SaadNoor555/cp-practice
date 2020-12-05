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
        int n, m, x, y;
        int c;
        cin>> n>> m>> x>> y;

        int a= m*n, h= min(y, x), h1= min(y-h, x);
            // cout<< h1<< " "<< h<< "\n";
        if(n%2 && m%2)
            c= ((a/2)*h1)+(((a/2)+1)*h);

        else
            c= (a/2)*(h+h1);

        cout<< c<< "\n";
    }
}