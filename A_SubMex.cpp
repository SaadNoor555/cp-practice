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
        int a[n], mex= 0;
        vector<int> x, y;
        for(int i=0; i<n; i++)
        {
            cin>> a[i];
        }
        sort(a, a+n);
        for(int i=0; i<n; i++)
        {
            if(i && a[i]==a[i-1]) y.push_back(a[i]);
            else x.push_back(a[i]);
        }
        if(x.size())sort(x.begin(), x.end());
        if(y.size())sort(y.begin(), y.end());
        int p=0;

        for(int i=0; i<x.size(); i++)
        {
            if(x[i]>p)
                break;
            else if(x[i]==p)p++;
        }
        mex+=p;

        p=0;
        for(int i=0; i<y.size(); i++)
        {
            if(y[i]>p)
                break;
            else if(y[i]==p)p++;
        }
        mex+=p;

        cout<< mex<<"\n";
    }
}
