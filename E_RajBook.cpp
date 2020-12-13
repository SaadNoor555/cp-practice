#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t, cs=0;
    cin>> t;
    while(t--)
    {
        cs++;
        ll n;
        cin>> n;
        cout<< n/5+bool(n%5)<< "\n";
    }
}