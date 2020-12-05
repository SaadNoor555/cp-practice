#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    long long k;
    cin>> n>> k;
    long long a[n], d[n];

    for(int i=0; i<n; i++)
        cin>> a[i];

    sort(a, a+n);
    
    long long l= 0, r= 2000000001, m;
    while(l<r)
    {
        m= (l+r+1)/2;
        long long c= 0, p=0;
        for(int i= n/2; i<n; i++)
            c+=max(m-a[i], p);

        if(c<=k) l= m;
        else r=m-1;
    }

    cout<< l<< "\n";

    
}