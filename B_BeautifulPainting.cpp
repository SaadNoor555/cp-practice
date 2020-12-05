#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back
#define NEWLINE "\n"

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

using namespace std;

int qty[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n;
	cin>> n;
	int a, rev= 0;;
	
	FOR(i, n, 1)
	{
		cin>> a;
		qty[a]++;
		rev= max(rev, qty[a]);
	}
	cout<<n-rev<<NEWLINE;
}
