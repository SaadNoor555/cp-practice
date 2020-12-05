#include<iostream>
#include<string>

using namespace std;
//promytail
int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n;
        cin>> n;

        bool gOne= false, gMin= false, yes= true;

        int a[n], b[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
            cin>>b[i];

        for(int i=0; i<n; i++)
        {
            if((a[i]<b[i] && !gOne) || (a[i]>b[i] && !gMin))
            {
                yes= false;
                break;
            }

            if(a[i]==1) gOne= true;
            else if(a[i]==-1) gMin= true;

            if(gMin && gOne)
                break;
        }

        if(yes) cout<<"YES\n";
        else cout<< "NO\n";
    }
}