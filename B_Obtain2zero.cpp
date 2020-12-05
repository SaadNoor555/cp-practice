#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        long long a, b;
        cin>> a>> b;
        long long d= abs(a-b);
        long long mx= max(a,b)-(2*d);
        long long mn= min(a,b) - d;
        if(!(mx%3) && !(mn%3) && abs(mx-mn)<=min(mx,mn)) cout<< "YES\n";
        else cout<<"NO\n";
    }
}