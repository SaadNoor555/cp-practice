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
    vector<char> brac;
    cin>> t;
    while(t--)
    {
        int n, c=0, p= 0;
        cin>> n;
        string s;
        cin>> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(') 
            {
                brac.push_back(s[i]);
            }
            else
            {
                if(!brac.empty()) brac.erase(brac.begin());
                else c++;
            }
            
        }
        brac.clear();
 
        cout<<c<<"\n";
    }
}