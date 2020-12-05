#include<bits/stdc++.h>
 
#define mod 1000000007
#define pb push_back
#define lli long long int 
#define mk make_pair 
#define fi first
#define se second
#define pii pair<int,int>
#define plli pair<lli,lli>
#define mii map<int,int> 
#define mlli map<lli,lli>
#define test lli chu;cin>>chu;while(chu--)
#define loop(i,n) for(lli i=0;i<n;i++) 
#define lop(i,n) for(lli i=1;i<=n;i++)
#define pp  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286  
#define S(z) z.size()
#define tom set<lli>
#define fill(a,b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
 
#define en cout<<"\n"
#define YES cout<<"YES"
#define NO  cout<<"NO"
#define Yes cout<<"Yes"
#define No  cout<<"No" 
#define er  cout<<"-1"
 
#define tks(s) string s; cin>>s
#define tk1(n) lli n; cin>>n
#define tk2(n,k) tk1(n);tk1(k)
#define tk3(a,b,c) tk2(a,b);tk1(c)
#define tk4(a,b,c,d) tk3(a,b,c);tk1(d)
#define tttt vector<lli> 
 
 
using namespace std;  
 
lli pow2(lli a,lli n,lli p)
{
    if(a == 0)
    return 0;
    if(n == 0)
    return 1;
    if(n%2 == 0)
    return (pow2(((a%p)*(a%p))%p,n/2,p)%p);
    else
    return ((pow2(((a%p)*(a%p))%p,n/2,p)%p)*(a%p))%p;
}
 
int main() 
{
pp;
lli chu; cin>>chu;
while(chu--)
{
	lli n,s;
	string t;cin>>t>>s;
	lli sum=0;
	n = t.size();
//	cout<<t<<"\n";
	lli pre[n+1]={0};
	lli i;
	for(i=0;i<n;i++)
	{
		pre[i+1] = pre[i] + t[i]-'0';
	}
	lli ans = pre[n];
//	cout<<ans<<"\n";
	lli ct=0;
	lli j=1;
	lli carry =0;
	for(i=n-1;i>=0;i--)
	{
		if(s >= ans) break;
//		if(t[i]=='9' && i!=) continue;
		lli x = t[i]-'0'+carry;
		ct+= (10 - x)*j;
		ans -= (x-1);
//		cout<<ans<<"\n";
		j=j*10;
		carry = 1;
		
	}
	cout<<ct<<"\n";
 
	
	
	
}
	
			
return 0;
}