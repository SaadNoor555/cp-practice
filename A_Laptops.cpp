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

struct Laps
{
    int a, b;
}laptop[100001];

bool cmp(Laps l1, Laps l2)
{
    return (l1.a> l2.a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>> n;
    
    
    FOR(i, n, 1)
        cin>> laptop[i].a>> laptop[i].b;

    sort(laptop, laptop+n, cmp);
    bool pr= false;
    FOR(i, n-1, 1)
    {
        // cout<<laptop[i].b<<"\n";
        if(laptop[i].b<laptop[i+1].b)
        {
            // cout<<"\bi";
            pr= true;
            break;
        }
    }
    if(pr) cout<<"Happy Alex\n";
    else cout<< "Poor Alex\n";
}