#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, p=0, s, ss=0, k=0;

    bool flag= false, cflag= false;
    string a;

    cin>> n;
    cin>> a;

    for(int i=0; i<n-1; i++)
    {
        ss=0;
        k=0;
        cflag= false;
        p+=(a[i]-'0');
        for(int j=i+1; ; j++)
        {
            if(j<n)
                ss+=(a[j]-'0');

            if(ss==p || ss==0)
            {
                if(ss==p)k++;
                ss=0;
                if(j==n-1 && k) cf= true;
            }

            else if(ss>p)
            {
                ss=0;
                break;
            }
            
            if(j==n-1)
            {
                if(cflag)
                {
                    flag= true;
                    i=n;
                }
                break;
            }
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}