#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        int n, x, tmp, an=0, c=0;
        cin>> n>> x;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            cin>> tmp;
            if(tmp==x) c++;
            an+=(tmp-x);
        }
        if(c==n) cout<< "0\n";
        else
        {
            if(!an || c) cout<< "1\n";
            else cout<< "2\n";
        }

    }
}