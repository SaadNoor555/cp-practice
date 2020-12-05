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
        string s1, s2;
        cin>> s1;
        cin>> s2;
        vector<int> an;

        FOR(i, n-1, 1)
        {
            if(s1[i]!=s1[i+1])
                an.push_back(i+1);
        }
        // cout<<"\n";

        char ref= s1[n-1];

        // cout<< ref<<"\n";
        for(int i=n-1; i>=0; i--)
        {
            if(s2[i]!=ref)
            {
                if(ref=='0') ref= '1';
                else ref= '0';
                an.push_back(i+1);
            }
        }
        int l= an.size();
        cout<< l<< " ";
        FOR(i, l, 1)
            cout<< an[i]<< " ";

        cout<< "\n";
    }
}