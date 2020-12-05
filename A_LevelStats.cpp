#include<iostream>
//proma

using namespace std;

int main()
{
    int t;
    cin>> t;
     while(t--)
     {
        int p1, p2=0, c1, c2=0, n;
        bool yes= true;

        cin>> n;

        for(int i=0; i<n; i++)
        {
            cin>>p1>>c1;
            if(yes)
                if(c1>p1 || p2>p1 || c2>c1 || (p1-p2)<(c1-c2)) yes= false;

            p2= p1;
            c2= c1;
        }
        if(yes) cout<<"YES\n";
        else cout<<"NO\n";
     }
}