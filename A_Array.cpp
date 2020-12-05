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
    
    int n, cm=0, cz=0;
    cin>> n;
    int a[n];
    FOR(i, n, 1) cin>> a[i];

    sort(a, a+n);
    
    FOR(i, n, 1)
    {
        if(a[i]<0) cm++;
        ELIF(!a[i]) cz++;
        else break;
    }

    cout<< "1 "<< a[0]<< "\n";
    int p;
    if(cm%2) 
    {
        p=1;
        cout<< n-cz-1<< " ";
    }
    else 
    {
        p=cm;
        if(!(n-cz-cm)) p-=2;
        cout<< n-cz-p<< " ";
    }


    for(int i=p; i<n; i++)
        if(a[i]) cout<< a[i]<<" ";
    cout<< "\n";
    if(p==1) cout<< cz<< " ";
    else
    {
        cout<< cz+p-1<< " ";
        for(int i=1; i<p; i++)
            cout<< a[i]<< " ";
    }
    
    for (int i = 0; i < cz; i++)
        cout<< "0 ";
    cout<<"\n";
    
}