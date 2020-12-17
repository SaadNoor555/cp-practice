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

#define rep(i, n)						for(int i=0; i<n; i++)
#define Out(output)						cout<< output<< '\n'
#define Debug(x)						cout<< #x<< ": "<< x<< '\n'
#define Debug2(x, y)					cout<< #x<< ": "<< x<< '\t'<< #y<< ": "<< y<< '\n'
#define Case(case_no, ans)				cout<< "Case "<< case_no<< ": "<< ans<< '\n'
#define vint							vector<int>
#define vll								vector<ll>
#define piin							pair<int, int>
#define pll								pair<ll, ll>
#define qint							queue<int>
#define qll								queue<ll>

typedef long long						ll;
typedef unsigned long long				ull;

using namespace std;

void RUN(int cntz);

ll pow_a_b(ll a, ll b, ll mod);

template<typename T>
T GCD(T a, T b);


int main()
{
	int t=1, cnt=0;
	// cin>> t;
	while(t--)
		RUN(cnt);
}
//DRIVER FUNCTION HERE
void RUN(int cntz)
{
	int n;
    ll an1=0, an2=0;
	cin>> n;
    
    if(!(n&1))
    {
        an2= (n-1)*(n-2)*(n-4);
        an2/=(GCD<int>((n-3), (n-1))*GCD<int>((n-1), (n-2))*GCD<int>((n-2), (n-3)));
        // cout<<(GCD<int>((n-3), (n-1))*GCD<int>((n-1), (n-2))*GCD<int>((n-2), (n-3)))<<'\n';

        an1= n*(n-1)*(n-3);
        an1/=(GCD<int>((n-3), (n-1))*GCD<int>((n-1), n)*GCD<int>(n, (n-3)));
        Debug2(an1, an2);
    }
    Out(max(an1, an2));
}


ll pow_a_b(ll a, ll b, ll mod)
{
	ll ans= 1;
	while(b)
	{
		if(b&1) ans= (ans*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return ans%mod;
}

template<typename T>
T GCD(T a, T b)
{
	if(!b) return a;
	return GCD(b, a%b);
}