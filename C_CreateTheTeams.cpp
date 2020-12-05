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
        ll n, x, temp, c=0;
        cin>> n>> x;
        vector<ll> a[n+1];
        FOR(i, n, 1)
        {
            cin>> temp;
            if(temp*n>=x)
            {
                if(!(x%temp) || temp>x) a[x/temp].push_back(temp);
                else a[(x/temp)+1].push_back(temp);
            }
        }
        temp= 0;
        for(int i=0; i<n+1; i++)
        {
            // cout<<a[i].size()<< "\n";
            if(i)
            {
                c+=(a[i].size()+temp)/i;
                temp=(a[i].size()+temp)%i;
                // cout<< temp<<".\n";
            }
            else c+=a[i].size();
        }
        cout<<c<< "\n";
    }
}