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
    	long long an= 0;
        int n;
		cin>> n;
		for(int i=0;i<n;i++)
		{
			if(i<=(n/2)-1) an+= pow(2, i);
			else an-= pow(2, i);
		}
		an+= pow(2, n);
			
		cout<< an<< "\n";
    }
}
