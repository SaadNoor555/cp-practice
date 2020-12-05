#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
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
        ll n, k, l1, r1, l2, r2, ans= 0;
        cin>> n>> k;
        cin>>l1>>r1>>l2>>r2;
        ll cl= k, ins= 0;
        ins= min(r1, r2)- max(l1, l2);
        if(ins>=0)
        {
            ll rem= k-(n*ins);
            if(n*ins>=k) ans= 0;
            else
            {
                if(l1==l2 && r1==r2)
                {
                    ans+=rem*2;
                }
                else
                {
                    ll fs= max(abs(l1-l2), abs(r1-r2))+min(abs(l1-l2), abs(r1-r2));
                    if(n*fs>=rem) 
                    {
                        ans+=rem;
                        rem=0;
                    }
                    else
                    {
                        ans+=(n*fs);
                        rem-=(n*fs);
                    }
                    
                    ans+=rem*2;
                }
            }
        }

        else
        {
            ll rs= max(l1, l2)-min(r1, r2);
            if(r1<r2) r1= l2;
            else r2= l1;
            ll rem= k;
            
            if(l1==l2 && r1==r2)
            {
                ans+=rem*2;
            }
            else
            {
                ll fs= max(abs(l1-l2), abs(r1-r2))+min(abs(l1-l2), abs(r1-r2));
                // cout<< fs<<"\t"<<rs<< "\n";
                if(n*fs>=rem) 
                {
                    if(rs<fs)
                    {
                        // cout<< "here\n";
                        ans+=(rem/fs)*rs;
                        if(rem%fs) ans+=rs;
                        ans+=rem;
                        rem=0;
                    }
                    else
                    {
                        // cout<<"hi\n";
                        ans+=(fs+rs);
                        rem-=fs;
                    }
    
                    
                    
                }
                else
                {
                    ans+=(n*rs);
                    ans+=(n*fs);
                    rem-=(n*fs);
                }
                ans+=rem*2;
            }
        }


        cout<< ans<<"\n";
    }
}