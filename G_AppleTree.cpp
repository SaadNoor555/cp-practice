#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int n, x;
struct node
{
    int n;
    int color;
}app[1000005];


void color(int p, int flag)
{
    app[p].color= flag;
    if(2*p+1>=n) return;
    color(2*p+1, !flag);
    color(2*p+2, !flag);
}

int main()
{
    int tc=1;
    // cin>> tc;

    while(tc--)
    {
        ll ans1= 0, ans2=0;
        cin>> n;
        int p=0, flag=0;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>> ar[i];
            app[i].n= ar[i];
        }
        color(0, 1);
        for(int i=0; i<n; i++)
        {
            cout<< app[i].color<< " ";
            if(app[i].color) ans1+=app[i].n;
            else ans2+=app[i].n;
        }
        cout<< "\n";
        cout<< max(ans1, ans2)<< "\n";
    }
}
