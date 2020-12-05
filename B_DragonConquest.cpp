#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back

//ssaadn.555@gmail.com

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;

    while(t--)
    {
        int an= 0;
        int x, n, m;
        cin>> x>> n>> m;
        
        if(x<=m*10)
            an= 1;

        FOR(i, n, 1)
        {
            if(an) break;
            x= x/2+ 10;

            if(x<=m*10)
                an= 1;
        }
        if(x<=0) an= 1;

        if(an) cout<<"YES\n";
        else cout<< "NO\n";

    }
}