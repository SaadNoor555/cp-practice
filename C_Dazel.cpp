#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n;
	cin>> n;
	
	char num[n];
	cin>>num;
	string ans= "";
	
	sort(num, num+n);
	
	FOR(i, n, 1)
	{
		if(num[i]=='4') ans+="322";
		ELIF(num[i]=='6') ans+="53";
		ELIF(num[i]=='8') ans+="7222";
		ELIF(num[i]=='9') ans+="7332";
		ELIF(num[i]=='1' || num[i]=='0') ans+="";
		else ans+=num[i];
	} 
	
	sort(ans.begin(), ans.end(), greater<char>());
	cout<<ans<<"\n";
}
