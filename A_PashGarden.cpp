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
    
    int x1, x2, y1, y2;
    cin>> x1>> y1>> x2>> y2;

    if(x1!=x2 && y2!= y1 && abs(y2-y1)!=abs(x2-x1)) cout<<"-1\n";
    else 
    {
        if(x1==x2) cout<<x1+abs(y2-y1)<< " "<< y1<< " "<< x1+abs(y2-y1)<< " "<< y2;
        else if(y1==y2) cout<<x1<< " "<< y1+abs(x2-x1)<< " "<< x2<< " "<< y1+abs(x2-x1);
        else cout<< x1<< " "<< y2<< " "<< x2<< " "<< y1;
        cout<< "\n";
    }
}