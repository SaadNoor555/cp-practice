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
typedef long long ll;

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    short n;
    cin>> n;
    short p[n];
    FOR(i, n, 1)
        cin>>p[i];
    bool an= true;

    getchar();

    for(int i=0; i<n; i++)
    {
        string s;
        getline(cin, s);
        short l= s.length(), v=0;
        for(int i=0; i<l; i++)
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
                v++;

        // cout<<v<<"\n";
        if(v!=p[i]) an= false;
    }

    if(an) cout<<"YES\n";
    else cout<<"NO\n";
}