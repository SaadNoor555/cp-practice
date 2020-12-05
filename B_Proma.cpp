#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
ll w[100001];
ll s[100001];
main(){
	
	ll n,q,b;
	cin>>n;
	
	ll a[n];
	memset(w,0,sizeof(w));
	memset(s,0,sizeof(s));
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s[w[a[i]]]--;
		w[a[i]]++;
		s[w[a[i]]]++;
		
	}

	
	cin>>q;
	
	for(int j=0;j<q;j++){
		char c1;
		cin>>c1>>b;
		
		int flag=0;
		// b=c2-'0';
		if(c1=='+')
		{
			if(s[w[b]]>0)
			s[w[b]]--;
			w[b]++;
			s[w[b]]++;
		}
		else{
			if(s[w[b]]>0)
			s[w[b]]--;
			
			w[b]--;
			
			s[w[b]]++;
		}
		for(int i=1;i<=6;i++)
		cout<<s[i]<<" ";
		
		cout<<"\n";
			
		for(int i=4;i<=100001;i++){
			if(s[i]>=1){
				s[i-4]++;
				s[i]--;
				flag++;
				break;
			}
		}
		cout<<flag<<"\n";
		ll sum=0;
		for(int i=2;i<=100001;i++){
			if(s[i]>=1){
				sum+=2;
			}
			else if(s[i]>=2)
			    sum+=4;
			if(sum==4){
				flag++;
				break;
			}
		}
		cout<<flag<<"\n";
//		if(flag==2)
//		cout<<"YES\n";
//		else
//		cout<<"NO\n";
		
	}
	
	
	
		
	
		
		
		
}