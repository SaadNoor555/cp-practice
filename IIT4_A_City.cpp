#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include <cmath>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

using namespace std;

int fact(int n)
{
    int ans= 1;
    for(int i=2; i<=n; i++)
        ans*=i;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    do
    {
        cin>> n;
        if(!n) break;
        int ar[n], sum= 0, cp=1;
        int cc[10];
        long long fin= 0;
        FOR(i, 10, 1) cc[i]= 0;
        FOR(i, n, 1)
        {
            cin>>ar[i];
            sum+= ar[i];
            cc[ar[i]]++;
        }
        for(int i=1; i<10; i++)
        {
            if(cc[i]>1) 
            {
                int t= fact(cc[i]);
                cp= cp*t;
            }
        }
        int ans= fact(n-1);
        ans=ans/cp;

        sum=sum*ans;
        cout<<sum;
        // cout<<ans<<"\n";
        int temp= sum;
        int an[n+1];
        FOR(i, n, 1)
        {
            fin+=temp*pow(10, i);
            
        }

        // cout<<fin;
        cout<<"\n";
    }while(1);
}