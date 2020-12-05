#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int tc=1;
    // cin>> tc;

    while(tc--)
    {
        int p, a, b, c=0;
        cin>> p>> a>> b;
        int pr;

        for(int i=0; i<p; i++)
        {
            cin>> pr;
            if(a+b>=pr) c++;
        }
            
        cout<< c<< "\n";
    }
}
