#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
bool comp(const pair<ll,ll> &a, const pair<ll,ll> &b){
	if(a.first==b.first){
		if(a.second<b.second)return true;
	}
	return (a.first>a.second);
}
int main(){
	ll T;
	cin>>T;
	while(T--){
		ll n;
		cin>>n;
		ll q;
		cin>>q;
		vector<ll> a(n+7,0);
		priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, comp> pq;
		for(int i=1;i<=n;i++){
			pq.push({a[i],i});
		}
		vector<ll> chk(q+7,0);
		for(int i=0;i<q;i++){
			ll x,add;
			cin>>x>>add;
			a[x]+=add;
			pq.push({a[x],x});
			chk[i]=pq.top().first;
		}
 
	ll ans=0;
	if(q==1){
		ans=0;
	}
	else{
	for(int i=q-1;i>=1;i--){
		if(i!=q-1)
		if(chk[i]!=chk[i-1]){
			ans=i+1;
			break;
		}
	}
	}
	cout<<ans<<endl;
	}
 
}