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
        int c, k;
        cin>> c>> k;
        string s;
        cin>> s;
        bool flag=0;
        k++;
        for(int i=0; i<c; i++)
        {
            if(s[i]=='0')
            {
                int cnt=0;
                while(s[i]!='1' && i<c)
                {
                    cnt++;
                    i++;
                }
                if(cnt>=k) flag=1;
            }
            if(flag) break;
        }

        if(flag) cout<< "yes\n";
        else cout<< "no\n";
    }
}