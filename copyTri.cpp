#include<bits/stdc++.h>

using namespace std;

int main()
{
    //long long p= __gcd(x, n);
    long long n,m,k;
    cin>>n>>m>>k;
     
    if((n*m*2)%k!=0)
    {
        cout<<"NO";
        return 0;
    }

    bool ok=true;
    if((n*m)%k!=0)
    {
        k/=2;
        ok=false;
    }
    
    long long x=__gcd(n,k);
    n/=x;
    k/=x;
    if(k==1)
    {
        if(ok)
            n*=2;
    }
    else 
    {
        m/=k;
        if(ok)
            m*=2;
    }
    cout<<"YES"<<endl;
    cout<<"0 0"<<endl;
    cout<<"0 "<<m<<endl;
    cout<<n<<" 0"<<endl;
}