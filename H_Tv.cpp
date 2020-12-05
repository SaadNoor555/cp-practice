#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
	cin>>n;
	int a[n],b[n];
	
	
	for(int i=0;i<n;i++)  
	    cin>> a[i]>> b[i];
	
	sort(a,a+n);
	sort(b,b+n);
	
	for(int i=0;i<n-2;i++){
	    if(b[i]>=a[i+2]) {
		    cout<<"NO\n";
		    return 0;
		}
	}
	cout<<"YES\n";
}