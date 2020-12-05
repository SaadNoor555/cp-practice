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
    int t, fc= 0, zc= 0;
    cin>> t;

    int p;
    while(t--)
    {
        cin>> p;
        if(p== 5) fc++;
        else zc++;
    }
    if(fc<9 && zc) cout<< "0\n";
    ELIF(fc<9 && !zc) cout<<"-1\n";
    ELIF(zc>0)
    {
        int x= fc/9;
        FOR(i, x, 1)
            cout<<"555555555";

        FOR(i, zc, 1)
            cout<<"0";
        cout<<"\n";
    }
    else
        cout<<"-1\n";
    
}