#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin>> t;
 
    while(t--)
    {
        long long n, x, extra= 0, wel= 0;
        cin>> n>> x;
        long long a[n];
 
        for(int i=0; i<n; i++)
        {
            cin>> a[i];
        }
 
        sort(a, a+n, greater<long long>());
 
        for(int i=0; i<n; i++)
        {
            if(a[i]>=x)
            {
                wel++;
                extra+=(a[i]-x);
            }
            else
            {
                if(x-a[i]<=extra)
                {
                    wel++;
                    extra-=(x-a[i]);
                }
                else break;
            }
            
        }
 
        cout<<wel<<endl;
    }
}