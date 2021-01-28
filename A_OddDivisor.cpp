#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include<queue>
#include<set>
#include<numeric>
#include<bitset>
#include<limits>
#include<cstring>
#include<map>
#include<iomanip> 
#include<stack>
 
typedef long long						ll;
typedef unsigned long long				ull;
 
using namespace std;
 
 
int main()
{
	long long int t=1, cnt,n,p,a;
    
	cin>> t;
	while(t--)
	{
        cin>>n;
 
        if(n%2==1 && n!=1)
            cout<<"YES\n";
        
        else if(n==1 || n==2)
            cout<<"NO\n";
 
        else
        {
            if(__builtin_popcountll(n)==1) cout<< "No\n";
            else cout<< "yes\n";
        }
 
        
 
 
 
    }
}