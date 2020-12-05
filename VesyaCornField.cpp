#include <iostream>
    
using namespace std;

int main()
{
    int d,n,m,y,x;
    cin>> n>> d>> m;
    while(m--)
    {
        cin>> x>> y;
        if(x+y>=d && x+y<=2*n-d && y-x>=-d && y-x<=d) cout<<"YES\n";
        else cout<<"NO\n";
    }
}