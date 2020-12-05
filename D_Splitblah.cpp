#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
int w[51];

int main(){
	
	ll t;
	cin>>t;
	
	while(t--){
		
		ll n,cnt=0;
		cin>>n;
		vector<string>v;
		
		string s;
		cin>>s;
		
		int num[n];
		
		v.push_back(string(1, s[0]));
		num[0]=cnt;
		for(int i=1;i<n;i++){
			if(s[i]==s[i-1])
			{
				cnt++;
				if(cnt>=v.size())
				{
					v.push_back(string(1, s[i]));
					num[i]=cnt;
				}
				else
                {
                    if(v[cnt][v[cnt].size()-1]!=s[i])
                    {
                        v[cnt]+=s[i];
                        num[i]=cnt;
                    }
                    
                    else
                    {
                        cnt++;
                        v.push_back(string(1, s[i]));
                        num[i]=cnt;
                    }
			    }
		}
			else{
				cnt=0;
				v[cnt]+=s[i];
				num[i]=cnt;
			}
			}
		
		cout<<v.size()<<"\n";
		
		for(int i=0;i<n;i++){
			cout<<num[i]+1<< " ";
		}
		cout<<"\n";
	}
		
		
	

}