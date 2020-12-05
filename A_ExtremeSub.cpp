#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int tc=1;
    cin>> tc;

    while(tc--)
    {
        int n, tmp;
        cin>> n;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            cin>> tmp;
            a.push_back(tmp);
        }
        tmp= 0;
        for(int i=1; i<n; i++)
            tmp+=abs(a[i-1]-a[i]);

        if(a[0]+a[n-1]<tmp) cout<< "No\n";
        else cout<<"Yes\n";
    }
}
