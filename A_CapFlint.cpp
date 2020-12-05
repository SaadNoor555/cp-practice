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
        int n;
        cin>> n;
        if(n<31) cout<< "NO\n";
        else
        {
            cout<< "YES\n";
            if(n!=44 && n!=40 && n!=36) cout<< "6 10 14 "<< n-30<< "\n";
            else cout<< "6 10 15 "<< n-31<< "\n";
        }
        
    }
}