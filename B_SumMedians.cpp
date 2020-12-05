#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int tc=1;
    cin>> tc;

    while(tc--)
    {
        int n, k;
        ll tmp, ans=0;
        cin>> n>> k;
        vector<ll> a;
        for(int i=0; i<n*k; i++)
        {
            cin>> tmp;
            a.push_back(tmp);
        }

        sort(a.begin(), a.end());
        // for(int i=0; i<n*k; i++) cout<< a[i]<< " ";
        // cout<< "\n";
        int c=0;
        for(int i= n*k-1-n/2; c<k; i-=((n/2)+1))
        {
            ans+=a[i];
            // cout<< a[i]<< " ";
            c++;
        }
        // cout<<"\n";

        cout<< ans<< "\n";
    }
}
