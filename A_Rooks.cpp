#include<bits/stdc++.h>

#define CASE(cnt,x) cout<< "Case "<<cnt<<": "<< x<< '\n';
typedef long long ll;

using namespace std;

int main()
{
    int t=1, cs=0;
    cin>> t;
    while(t--)
    {
        cs++;
        int n, k;
        cin>> n>> k;
        unsigned long long ans= 1;
        for(ll i=0; i<k; i++)
            ans=(ans*(n-i)*(n-i)/(i+1));

        CASE(cs, ans);
    }
}