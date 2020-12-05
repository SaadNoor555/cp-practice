#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

unsigned long long n, m;

unsigned long long gcd(unsigned long long a, unsigned long long b) 
{
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

unsigned long long lcm(unsigned long long a, unsigned long long b)
{
    unsigned long long f= (a/gcd(a, b)), x= b, p=f;

    int c1=0, c2=0;
    while(x)
    {
        x/=10;
        c1++;
    }
    while(p)
    {
        p/=10;
        c2++;
    }

    if(c1*c2>18) return n+1;
    return f*b;
}

int main()
{
    int tc=1;
    // cin>> tc;

    while(tc--)
    {
        unsigned long long ans=0;
        cin>> n>> m;
        ans= 0;
        unsigned long long a[m];

        for(int i=0; i<m; i++)
            cin>> a[i];
        map<unsigned long long, bool> tk;
        for(int i=0; i<m; i++)
        {
            ll ref= a[i];
            ans+=n/a[i];
            // cout<< ans<< "\n";
            for(int j=i+1; j<m; j++)
            {
                ll p= lcm(a[i], a[j]);
                if(!tk[p])
                {
                    ans-=n/p;
                    tk[p]=1;
                }
            }
        }

        cout<< min(ans, n)<< "\n";
    }
}
