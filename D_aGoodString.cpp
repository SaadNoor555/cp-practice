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

int cal(const string &s, char c)
{
    if(s.size()==1)
        return s[0]!=c;

    int mid= s.size()/2;
    int cntl= cal(string(s.begin(), s.begin()+mid), c+1);
    cntl+= mid-count(s.begin()+mid, s.end(), c);
    int cntr= cal(string(s.begin()+mid, s.end()), c+1);
    cntr+= mid-count(s.begin(), s.begin()+mid, c);
    return min(cntr, cntl);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        string s;
        cin>> s;
        cout<< cal(s, 'a')<< "\n";
    }
}