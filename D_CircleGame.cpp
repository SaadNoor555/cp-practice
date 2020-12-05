#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int tc=1;
    cin>> tc;

    while(tc--)
    {
        int d, k;
        cin>> d>> k;
        int cx=0, cy=0;
        int flag=-1, cur=0;
        while (1)
        {
            int xd, yd;
            
            if((d*d)-(cy*cy)>=0) xd= sqrt((d*d)-(cy*cy));
            if((d*d)-(cx*cx)>=0) yd= sqrt((d*d)-(cx*cx));
            cout<< cx<< " "<< cy<< " "<< xd<< " "<< yd<< "\n";
            if((xd/k)%2) cx+=k;
            else if((yd/k)%2) cy+=k;
            else break;
            if(cx*cx+cy*cy>d*d) break;
            cur=!cur;
            if(cx*cx+cy*cy==d*d) break;
        }

        if(cur) cout<< "Ashish\n";
        else cout<< "Utkarsh\n";
        
    }
}
