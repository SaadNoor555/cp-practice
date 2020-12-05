#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MOD 1
using namespace std;
 
int countWays(int n) 
{ 
    int A[n + 1], B[n + 1]; 
    A[0] = 1, A[1] = 0, B[0] = 0, B[1] = 1; 
    for (int i = 2; i <= n; i++) { 
        A[i] = A[i - 2] + 2 * B[i - 1]; 
        B[i] = A[i - 1] + B[i - 2]; 
    } 
  
    return A[n]; 
} 
 
void in(ll a[],ll n){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
 
void out(ll a[],ll n){
	for(int i=0;i<n;i++)
	cout<<a[i];
	
	//cout<<"\n";
}
bool prime[1001];
 
bool cmp(pair<ll,ll>p1,pair<ll,ll>p2){
	return p1.first<p2.first;
}
 
bool cmp2(pair<ll,ll>p1,pair<ll,ll>p2){
	if(p1.second==p2.second)
	return p1.first<p2.first;
	else
	return p1.second>p2.second;
	
}
 
 
ll mul(ll n,ll k){
	ll res=1;
	//n=n%MOD;
	while(k){
		if(k%2==1){
			//res=(res*n)%MOD;
			res=(res*n);
		}
		k/=2;
	//	n=(n*n)%MOD;
		n=(n*n);
	}
	return res;
}
 
ll count(ll a[],ll n,ll p){
	ll c=0;
	
	for(int i=1;i<=n;i++){
		if(a[i]>=p)
		c++;
	}
	return c;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n];
        vector<int> neg, pos;
        for(int i=0; i<n; i++)
        {
            cin>> a[i];
            if(a[i]<0) neg.pb(-1*a[i]);
            else pos.pb(a[i]);
        }
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());

        ll mx= INT64_MIN, p=1, x=pos.size(), y=neg.size();

        // for(int i=0; i<x; i++) cout<< pos[i]<<" ";
        // cout<< "\n";
        // for(int i=0; i<y; i++) cout<< neg[i]<<" ";
        // cout<< "\n";
        for(int i=0; i<=5; i++)
        {
            p=1;
            if(pos.size()>=5-i && neg.size()>=i)
            {
                if(i%2)
                {
                    for(int j=0; j<5-i; j++)
                        p*=pos[j];
                    for(int j=0; j<i; j++)
                        p*=neg[j];

                    // cout<< "\n";
                    p=p*-1;
                    // cout<<i<<"\t"<< p<< "\n";
                    
                }
                else
                {
                    for(int j=x-1; j>=x-5+i; j--)
                        p*=pos[j];
                    for(int j=y-1; j>=y-i; j--)
                        p*=neg[j];
                    // cout<< "\n";
                    

                    // p*=-1;
                    // p=-1*p;
                    // cout<<i<<"\t"<< p<< "\n";
                    
                }
                // cout<< i<<"\n";
                mx= max(mx, p);
            }
        }
        printf("%lli\n", mx);
    }
}