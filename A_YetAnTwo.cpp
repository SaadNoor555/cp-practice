#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll a, b;
        cin>> a>> b;
        if((a-b)%10)cout<< (abs(a-b)/10)+1<< "\n";
        else cout<<(abs(a-b)/10)<< "\n";
    }
}