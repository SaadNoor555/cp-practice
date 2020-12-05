#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int tc=1;
    cin>> tc;

    while(tc--)
    {
        int n, tmp, an=0;
        cin>> n;
        vector<int> a;
        bitset<1025>s;
        for(int i=0; i<n; i++)
        {
            cin>> tmp;
            a.push_back(tmp);
            s[tmp]=1;
        }
        sort(a.begin(), a.end());

        for(an=1; an<=1024; an++)
        {
            bitset<1025> cl;
            for(int i=0; i<n; i++)
                if((a[i]^an)<=1024)cl[a[i]^an]=1;

            if(cl==s) break;
        }

        if(an>1024) an=-1;
        cout<< an<< "\n";
    }
}
