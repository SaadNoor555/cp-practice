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
        int n, c= 0;
        cin>> n;
        string s;
        cin>> s;
        
        queue<int> f0;
        queue<int> f1;
        vector<int> a;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                if(f1.empty())
                {
                    a.push_back(++c);
                    f0.push(c);
                }
                else
                {
                    int tem= f1.front();
                    a.push_back(tem);
                    f1.pop();
                    f0.push(tem);
                }
            }
            else
            {
                if(f0.empty()) 
                {
                    a.push_back(++c);
                    f1.push(c);
                }
                else
                {
                    int tem= f0.front();
                    a.push_back(tem);
                    f0.pop();
                    f1.push(tem);
                }
            }
        }

        cout<<c<<"\n";
        for(int i=0; i<n; i++) cout<< a[i]<< " ";
        cout<<"\n";
    }
}