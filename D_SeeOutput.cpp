#include<bits/stdc++.h>
using namespace std;
int dp[202][202][202];
int a[202],b[202],c[201];
int ans=0;
int main(){
	int A,B,C;scanf("%d%d%d",&A,&B,&C);
	for(int i=1;i<=A;++i)scanf("%d",a+i);
	for(int i=1;i<=B;++i)scanf("%d",b+i);
	for(int i=1;i<=C;++i)scanf("%d",c+i);
	sort(a+1,a+A+1);
	sort(b+1,b+B+1);
	sort(c+1,c+C+1); 
	for(int i=A;i>=0;--i){
		for(int j=B;j>=0;--j){
			for(int k=0;k<=C;++k){
				dp[i][j][k]=max(dp[i+1][j+1][k]+a[i+1]*b[j+1],max(dp[i+1][j][k+1]+a[i+1]*c[k+1],max(dp[i][j+1][k+1]+b[j+1]*c[k+1],0)));
                
				ans=max(ans,dp[i][j][k]);
			} 
		}
}
	cout<<ans<<endl;
	return 0;
} 