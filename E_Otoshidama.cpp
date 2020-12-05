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
    
    int n, y, tc=0, fc=0, oc= 0;
    cin>> n>> y;
    if(n*1000>y || n*10000<y)
    {
        tc= -1;
        oc= -1;
        fc= -1;
    }
    else
    {
        int tem= y/1000;
        int p= tem-n;
        while(1)
        {
            if(!(p%4) && (p/4)+tc<=n) break;
            p-=9;
            tc++;
            if(p<0)
            {
                tc= -1;
                oc= -1;
                fc= -1;
                break;
            }
        }
        if(!fc && n-tc) fc= p/4;
        if(!oc && n-tc-fc) oc= n-tc-fc;
    }
    cout<< tc<< " "<< fc<< " "<< oc<< "\n";
    
}