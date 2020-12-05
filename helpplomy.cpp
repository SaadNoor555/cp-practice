#include<bits/stdc++.h>
#include<string.h> 
#define ll long long 
using namespace std;

//ll solve(ll x,ll n){
//	ll res=0;
//	while(n>0){
//		res+=min(n,x);
//		n-=min(n,x);
//		n-=(n/10);
//	}
//	return res;
//}

int main(){
	ll n,x,y,j,k=0;
	cin>>n>>x>>y;
	int flag=0;
	string s;
	cin>>s;
	string r;
	
	ll zero=0;
	ll one=0,cnt=0,gro=0;
	
	for(int i=0;i<n;i++){
		if(s[i]=='0'){
			zero++;
			if(flag==0){
				flag=1;
				j=i;
			}
			else if(flag==2){
			
			//reverse(s.begin()+j,s.begin()+i);
                cnt++;
                gro++;
                
                //cout<<i<<j<<"\n";
                i=i-one-1;
                flag=0;
                one=0;
		    }
		else if(flag!=2 && i==n-1){
			gro++;
		}
		
	}
	else{
		if(flag==1){
			if(i!=n-1){
				flag=2;
				one++;
			}
			else if(i==n-1){
				//cout<<i<<j;
				//reverse(s.begin()+j,s.begin()+i+1);
				cnt++;
			}
		}
	}
}
	if(zero)
	    k=x*cnt+y;
	 
	 cout<<min(k,gro*y);
	 
	 
	
//	cout<<k;
	//cout<<s;
}