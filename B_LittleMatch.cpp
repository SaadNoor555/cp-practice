#include<bits/stdc++.h>

typedef long long ll;

using namespace std;
int ml[]= {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int main()
{
    int t, cs=0;
    cin>> t;
    while(t--)
    {
        cs++;
        int n, cnt=0;
        string s;
        cin>> n>> s;
        for(int i=0; i<n; i++)
            cnt+=ml[s[i]-'0'];

        // cout<< cnt<< "\n";
        vector<int> ans;
        if(n!=1)
        {
            for(int i=1; i<=n; i++)
            {
                if((n-i)*2<=cnt-6)
                {
                    ans.push_back(9);
                    cnt-=6;
                }
                else if((n-i)*2<=cnt-3)
                {
                    ans.push_back(7);
                    cnt-=3;
                }
                else
                {
                    ans.push_back(1);
                    cnt-=2;
                }
            }
            for(int i=n-1; i>=0; i--)
            {
                if(!cnt) break;
                if(ans[i]==7) ans[i]=4, cnt--;
                else if(ans[i]==9) ans[i]=8, cnt--;
            }
        }
        else
        {
            if(cnt==2) ans.push_back(1);
            else if(cnt==4) ans.push_back(4);
            else if(cnt==5) ans.push_back(5);
            else if(cnt==3) ans.push_back(7);
            else if(cnt==7) ans.push_back(8);
            else ans.push_back(9);
        }
        
        // for(int i=0; i<n; i++) cout<< ans[i];
        // cout<< "\n";
        

        for(int i=0; i<n; i++) cout<< ans[i];
        cout<< "\n";
    }
}