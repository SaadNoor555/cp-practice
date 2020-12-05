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
    
    int n;
    cin>> n;

    bool wg= true;
    long long d[n], min= 1000000001, p=0;

    FOR(i, n, 1)
    {
        cin>> d[i];
        if(d[i]<min)
        {
            p= i;
            min= d[i];
            wg= true;
        }
        else if(d[i]==min)
            wg= false;
    }

    if(wg)  cout<< p+1<< "\n";
    else    cout<<"Still Rozdil\n";
}