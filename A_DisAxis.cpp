#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll n, k;
        cin>> n>> k;
        if(k>n) cout<< k-n<< "\n";
        else cout<< (n-k)%2<< "\n";
    }
}