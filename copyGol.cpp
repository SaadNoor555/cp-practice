#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, sum=0, sc=0, c=0;
    bool flag= false, cflag= false;
    string a;

    cin>> n>> a;

    for(int i=0; i<n-1; i++)
    {
        sum += (a[i]-'0');
        for(int j=i+1; j<n; j++)
        {
            if(j<n) sc+=(a[j]-'0');
            if(sc==sum || !sc)
            {
                if(sc==sum) c++;
                sc=0;
                if(j==n-1 && c>0) cflag= true;
            }
            else if(sc>sum)
            {
                sc=0;
                break;
            }
            if(j==n-1)
            {
                if(cflag)
                {
                    i=n;
                    flag= true;
                }
                break;
            }
        }
        sc=0;
        cflag= false;
        c= 0;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}