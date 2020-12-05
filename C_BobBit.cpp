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

string OR(string &a, string &b)
{
    string c;
    int i, j;
    // cout<< a<< ".\t"<<b<<".\t";
    for(int i=0; i<max(a.length(), b.length()); i++)
    {
        if(i>=min(a.length(),b.length())) c+='0';
        else if(a[i]!=b[i]) c+='0';
        else c+= a[i];
    }
    // cout<< c<<"\n";
    return c;
}

int zerCount(string s)
{
    int z=0;
    for(int i=0; i<s.length();i++)
        if(s[i]=='1') z++;

    return z;
}

int binToDec(string s)
{
    int dec= 0;
    int tem= 1;
    for(int i=s.length()-1; i>=0; i--)
    {
        dec+= (s[i]-'0')*tem;
        tem*=2;
    }

    return dec;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    t= 1;
    while(t--)
    {
        int n, m, ans= 0;
        cin>> n>> m;

        int a[n], b[m], c[n];

        for(int i=0; i<n; i++)
            cin>> a[i];

        for(int i=0; i<m; i++)
            cin>> b[i];

        for(int an=0; an<1024; an++)
        {
            int i, j;
            bool ai= true;
            for(i=0; i<n; i++)
            {
                bool p= false;
                for(j=0; j<m; j++)
                {
                    if(((a[i]&b[j])|an)==an)
                    {
                        p= true;
                        break;
                    }
                }
                if(!p)
                {
                    ai= false;
                    break;
                }
            }
            if(ai)
            {
                ans= an;
                break;
            }
        }

        cout<< ans<< "\n";
    }
}