#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int tc=1;
    cin>> tc;

    while(tc--)
    {
        int n, c0, c1, h, s0=0, s1=0, ans=0, ans1=0;
        cin>> n>> c0>> c1>> h;

        string s;
        cin>> s;

        s0= count(s.begin(), s.end(), '0');
        s1= n-s0;

        ans= s0*c0 + s1*c1;
        ans1= ans;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') ans= min(ans, ans-c0+h+c1);
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1') ans1= min(ans1, ans1-c1+h+c0);
        }

        cout<< min(ans1, ans)<< "\n";
    }
}
