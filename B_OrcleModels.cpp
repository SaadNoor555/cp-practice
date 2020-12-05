#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PuB push_back

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
        int n;
        int64 tmp;
        cin>> n;
        long long s[n+5];
        FOR(i, n, 1)
        {
            cin>>s[i+1];
        }
        int score[n+5];
        FOR(i, n+5, 1)
            s[i]= 1;
        for(int i= n-1; i>=1; i--)
        {
            int p= 2;
            for(int j= i; j>=1;)
            {
                if(!(j%p) && s[j]>s[j/p])
                {
                    score[j/p]+=score[j];
                    break;
                }
                while(j%p) p++;
                j/=p;
            }
        }
    }
}