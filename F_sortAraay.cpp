#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, l, r=0, c=0;
    cin>> n;
    long long a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
        b[i]= a[i];
    }
    sort(b, b+n);
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            l= i+1;
            c++;
            if(c==1)
            for(int j= i+1; j<n-1; j++)
            {
                if(a[j]<a[j+1])
                {
                    r= j+1;
                    i= j+1;
                    break;
                }
                if(j==n-2)
                {
                    r=n;
                    i=n;
                }
            }
            if(!r) r=n;
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if(i<l-1 || i>r-1)
            if(a[i]!=b[i])
            {
                c=2;
                break;
            }
    }

    if(c==1) 
    {
        cout<<"yes\n";
        cout<<l<< " "<< r<< "\n";
    }
    else if(!c)
        cout<<"yes\n1 1\n";
    
    else cout<<"no\n";
}