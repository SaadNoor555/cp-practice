#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstring>


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


const int N = 50000;
bool check_prime(int n){
	for(int i = 2; i < min(N, n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;
    while(t--)
    {
        bool as= false;
        ll n, c=0;
        cin>> n;
        if(n==1) as= true;
        if(!(n%2) && n>2)
        {
            if(!(n & (n-1))) as=1;
            else if(n%4 && check_prime(n/2)) as= 1;
        }
        if(as) cout<< "FastestFinger\n";
        else cout<< "Ashishgup\n";
    }
}