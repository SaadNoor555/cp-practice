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
        int n, tem, c=0;
        int p= 0;
        vector<int> a;
        
        cin>> n;
        bool pos[n];
        for(int i=0; i<n; i++)
        {
            cin>> tem;
            a.push_back(tem);
            if(a[i]==i+1) pos[i]= 1;
            else pos[i]= 0;
        }
        
        for(int i=0; i<n-1; i++)
        {
            if(!pos[i]) c++;
            if(pos[i] && !pos[i+1]) p++;
            else if(!pos[i] && pos[i+1]) p++;
        }
        if(pos[0] && pos[n-1]) p--;
 
        if(!c) cout<< "0\n";
        else if(p>1) cout<< "2\n";
        else cout<< "1\n";
        
    }
}