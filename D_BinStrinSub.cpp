#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include<queue>

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
        int n, m0= 0, m1= 0, m=0, mx= 0;
        cin>> n;
        vector<int> an;
        string s;
        cin>> s;
        an.push_back(1);
        char bf= s[0];
        if(bf=='0') m0= 1;
        else m1= 1;
        for(int i=1; i<n; i++)
        {
            if(s[i]==bf)
            {
                if(bf=='0')an.push_back(++m0);
                else an.push_back(++m1);
            }
            else
            {
                m= max(m1, m0);
                mx= max(mx, m);
                m0=0;
                m1=0;
                // cout<<m0<<"\t"<<m1<< ".\n";
                if(bf=='0')
                {
                    cout<<".";
                    if(m0==m) m0=mx;
                    an.push_back(++m0);
                }
                else
                {
                    cout<<"-";
                    if(m1==m) m1= mx;
                    an.push_back(++m1);
                }
                bf=s[i];
            }
            cout<< an[i]<<" ";
            
        }

        // for(int i=0; i<n; i++) cout<<an[i]<< " ";
        cout<< "\n";
    }
}