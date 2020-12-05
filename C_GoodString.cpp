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
        string s;
        cin>> s;
        int c=0, maxm= 0;
        int flag= 0;

        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                c=0;
                flag= i;
                for(int k=0; k<s.length(); k++)
                {
                    if(s[k]-'0'==flag)
                    {
                        c++;
                        flag= flag==i? j: i;
                    }
                }
                if(i!=j && c%2) c--;
                // cout<< i<<" "<<j<< " "<<c<<"\n";
                maxm= max(c, maxm);
            }
        }

        cout<< s.length()-maxm<<"\n";
    }
}