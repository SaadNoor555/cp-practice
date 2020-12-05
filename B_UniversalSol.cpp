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
        string s, an;
        int rc, sc, pc;
        cin>> s;
        rc= count(s.begin(), s.end(), 'R');
        sc= count(s.begin(), s.end(), 'S');
        pc= count(s.begin(), s.end(), 'P');

        if(rc>=pc && rc>=sc) cout<< string(s.size(), 'P');
        else if(pc>=rc && pc>=sc) cout<< string(s.size(), 'S');
        else if(sc>=rc && sc>=pc) cout<< string(s.size(), 'R');

        cout<< "\n";
    }
}