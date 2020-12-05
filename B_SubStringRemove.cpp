#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
	ll t;
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		
		vector<ll>cnt;
		
		ll c=0;
		
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				c++;
			}
			else {
				if(c>0)
				cnt.push_back(c);
				c=0;
				
			}
		}
		if(c>0)
		cnt.push_back(c);
		
		sort(cnt.begin(),cnt.end());
		reverse(cnt.begin(),cnt.end());
		ll res=0;
		for(int i=0;i<cnt.size();i++){
			if(i%2==0){
				res+=cnt[i];
			}
		}
		cout<<res<<"\n";
	}
}