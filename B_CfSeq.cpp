#include<bits/stdc++.h>
using namespace std;
long long n,k,a[12],p;
string s;
int main(){
	cin>>n;
	for(k=1;k<=10;k++)
	a[k]=1;
	p=1;
	while(p<n){
		
		
		for(k=1;k<=10;k++){
			p/=a[k];
			a[k]++;
			p*=a[k]; if(p>=n) break;
		}
	}
	s="codeforces";
	for(k=0;k<10;k++){
		while(a[k+1]--){
			cout<<s[k];
		}
		
	}
	
	
}