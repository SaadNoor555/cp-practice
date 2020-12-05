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
        char soduko[9][10];
        FOR(i, 9, 1)
            cin>>soduko[i];

        soduko[0][0]=soduko[0][1];
        soduko[1][3]=soduko[1][4];
        soduko[2][6]=soduko[2][7];
        soduko[3][1]=soduko[3][2];
        soduko[4][4]=soduko[4][5];
        soduko[5][7]=soduko[5][8];
        soduko[6][2]=soduko[6][1];
        soduko[7][5]=soduko[7][4];
        soduko[8][8]=soduko[8][7];

        // cout<<"\n";
        FOR(i, 9, 1)
            cout<< soduko[i]<<"\n";

    }
}