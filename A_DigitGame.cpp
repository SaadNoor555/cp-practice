#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        string s;
        int win;
        cin>> s;
        if(n%2)
        {
            for(int i=0; i<n; i+=2)
            {
                if((s[i]-'0')%2)
                {
                    win= 1;
                    break;
                }
                else if(i==n-1) win=2;
            }
        }
        else
        {
            for(int i=1; i<n; i+=2)
            {
                if((s[i]-'0')%2==0)
                {
                    win=2;
                    break;
                } 
                else if(i==n-1) win= 1;
            }
        }
        cout<< win<< "\n";
    }
}