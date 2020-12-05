#include<bits/stdc++.h>

#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
        int n= s.length(), c=0;
        vector<int> ord;
        FOR(i, n, 1)
        {
            if(s[i]=='1')
                c++;
            else
            {
                if(c)ord.push_back(c);
                c=0;
            }
        }
        if(c) ord.push_back(c);

        sort(ord.rbegin(), ord.rend());

        ll c1=0;

        for(int i=0; i<ord.size(); i+=2)
            c1+=ord[i];

        cout<< c1<< "\n";
    }
}