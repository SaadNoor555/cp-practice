#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll x[2], y[2], z[2], ans= 0, zero= 0;
        cin>> x[0]>> y[0]>> z[0];
        cin>> x[1]>> y[1]>> z[1];

        ans+= min(z[0], y[1])*2;
        z[0]-=min(z[0], y[1]);
        y[1]-=min(z[0], y[1]);
        z[1]= max(z[1]-z[0], zero);
        // cout<< z[1]<<" ";
        if(z[1]>=x[0])
        {
            z[1]-=x[0];
            x[0]= 0;
        }
        else z[1]=0;
        // cout<< z[1]<< "\n";
        ans-=min(z[1], y[0])*2;

        cout<< ans<< "\n";
    }
}