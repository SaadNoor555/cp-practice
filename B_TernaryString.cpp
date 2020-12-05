#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<string.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

using namespace std;

int lcs(char* X, char* Y, int m, int n) 
{ 
    if (m == 0 || n == 0) 
        return 0; 
    if (X[m - 1] == Y[n - 1]) 
        return 1 + lcs(X, Y, m - 1, n - 1); 
    else
        return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n)); 
} 
  
/* Utility function to get max of 2 integers */
int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;

    while(t--)
    {
        char *s;
        char b1[]= "123", b2[]="321", b3[]= "213", b4[]= "231", b5[]= "132", b6[]= "312";
        cin>> s;
        int l= strlen(s);
        int ln[6];
        ln[0]=(s, b1, l, 3);
        ln[1]=(s, b2, l, 3);
        ln[2]=(s, b3, l, 3);
        ln[3]=(s, b4, l, 3);
        ln[4]=(s, b5, l, 3);
        ln[5]=(s, b6, l, 3);

        sort(ln, ln+6);
        cout<<ln[0]<<"\n";
    }
}