#include<bits/stdc++.h>
#include<vector>
#include<deque>
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
 
int main(){
 
    string s;
    cin>>s;
    long long p=s.length();

    for(int i= 0; i<p; i++)
        if(s[i]=='r') cout<< i+1<< " ";

    for(int i=p-1; i>=0; i--)
        if(s[i]=='l') cout<<i+1<< " ";

    cout<<"\n";
}
