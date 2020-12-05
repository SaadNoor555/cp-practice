#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        unsigned long long int n, k, c= 0;
        cin>> n>> k;
        while (n)
        {
            if(n%k==0)
            {
                n/=k;
                c++;
            }
            else
            {
                c+=(n%k);
                n-=(n%k);
            }
 
        }
        cout<<c<<"\n";
    }
}