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
typedef long long ll;

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
        cin>> n;
        int a[n];
        FOR(i, n, 1) cin>> a[i];
        char s[51];
        FOR(i, 50, 1) s[i]= 'a';
        s[50]= '\0';
        cout<< s<< "\n";
        FOR(i, n, 1)
        {
            int j= 0;
            // cout<< a[i]<< "\n";
            for(; j<a[i]; j++)
                cout<<s[j];
            // cout<<".";
            for(; j<50; j++)
            {
                if(s[j]=='a')
                {
                    cout<< 'b';
                    s[j]= 'b';
                }
                else 
                {
                    cout<<'a';
                    s[j]= 'a';
                }
            }
            cout<< "\n";
        }
    }
}