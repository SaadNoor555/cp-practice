#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include<map>

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

map<int, int> m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        m.clear();
        int n;
        ll an=0, sum=0;
        string s;
        cin>> n>> s;
        m[0]++;

        for(int i=0; i<n; i++)
        {
            sum+=(s[i]-'1');
            an+=m[sum];
            m[sum]++;
        }
        cout<< an<< "\n";

    }
}