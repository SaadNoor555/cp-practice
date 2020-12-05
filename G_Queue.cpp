#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>> n;
    long long t[n];
    for(int i=0; i<n; i++)
        cin>> t[i];

    sort(t, t+n);
    long long c= 0, m=0;
    for(int i=0; i<n; i++)
    {
        if(t[i]<c) 
        {
            m++;
            // cout<< t[i]<<"\n";
        }
        else c+=t[i];
    }
    cout<< n-m<< "\n";
}