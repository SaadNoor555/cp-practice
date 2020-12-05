#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>

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
    
    short m,s;
    short n= 0;
    
    cin>> m>> s;
    int num1[m];
    short p= s;

        if(!(m==1&&s==0)&&((9*m)<s|| s==0)) cout<<"-1 -1\n";
    else
    {
        for(int i=m-1; i>=0; i--)
        {
            if(i)
            {
                if(p>9)
                {
                    num1[i]= 9;
                    p-=9;
                }
                else if(p>1)
                {
                    num1[i]= p-1;
                    p= 1;
                }
                else 
                    num1[i]= 0;
            }
            else
                num1[i]= p;
        }
        for(int i=0; i<m; i++)
            cout<<num1[i];

        cout<<" ";
        int q= s;
        for(int i=0; i<m; i++)
        {
            cout<<min(9, q);
            q-= min(9, q);
        }
        cout<<"\n";
    }
    
}