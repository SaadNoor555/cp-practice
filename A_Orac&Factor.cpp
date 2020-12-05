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

int findkth(int n, int k) 
{

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return i;

    return n;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;

    while(t--)
    {
        int64 n, k, ans=0;
        cin>> n>> k;
        if(!(n%2)) cout<< n+(k*2);
        else cout<< n+findkth(n, 2)+((k-1)*2);

        cout<<"\n";
    }
}