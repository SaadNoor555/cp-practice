#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll a, b, x, y, n, ans, at, bt;
        cin>> a>> b>> x>> y>> n;
        
        if(a>=b)
        {
            swap(a, b);
            swap(x, y);
        }
        at= a, bt= b;
        
        if(at-x>=n)
        {
            at-=n;
        }
        else
        {
            if(bt-n+(at-x)>=y) bt= bt-n+(at-x);
            else bt= y;
            at= x;
        }
        ans= at*bt;
        at= a, bt= b;
        if(bt-y>=n)
        {
            bt-=n;
        }
        else
        {
            if(at-n+(bt-y)>=x) at= at-n+(bt-y);
            else at= x;
            bt= y;
        }
        ans= min(ans, at*bt);
        cout<< ans<< "\n";
    }
}