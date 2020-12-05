#include<iostream>

using namespace std;

long long _GCD(long long a,long long b)
{
    if(!b) return a;
    else return _GCD(b, a%b);
}

int main()
{
    long long n, m, k, x, y;

    cin>> n>> m>> k;

    long long tmp1= n*m;
    long long tmp2= _GCD(2*n, k);

    if(tmp1*2%k)
    {
        cout<<"NO\n";
        return 0;
    }
    y= n;
    if(tmp2==1) x= m*2/k;
    else
    {
        x= m*tmp2/k;
        y= n*2/tmp2;
    }

    cout<<"YES\n";
    cout<<"0 0\n"<<"0 "<<x<<endl<<y<<" 0\n";

    
}