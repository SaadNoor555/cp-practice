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

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;

    while(t--)
    {
    	int n, k;
    	int sum[26];
    	FOR(i, 26, 1)
    		sum[i]= 0;
    	cin>> n>> k;
    	string s;
    	cin>> s;
    	FOR(i, n, 1) sum[s[i]-'a']++;
    	
    	int sz= n/k;
    	
    	for(int i=0; i<sz; i++)
    	{
			for(int j= 25; j>=0; j--)
			{
				if(sum[j])
				{
					char c= j+'a';
					cout<<
    }
}
