#include<iostream>
#include<algorithm>
#include <numeric> 

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int a, b, q;
        cin>>a>> b>> q;
        int LCM= lcm(a, b);
        
        int mn= max(a,b);
        
        while(q--)
        {
            long long l, r;
			cin>> l>> r;
			long long intr= r-l+1;
			long long rb= (r/LCM)*mn;
			long long lb= ((l-1)/LCM)*mn;
			
			if(r%LCM<mn) rb+=(r%LCM);
			else  rb+=(mn-1);

			if((l-1)%LCM<mn)lb+=((l-1)%LCM);
			else lb+=(mn-1);

			long long rev= rb- lb;
			cout<< intr-rev<< " ";
        }
        cout<<"\n";
    }
}
