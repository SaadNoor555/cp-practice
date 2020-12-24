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
    freopen( "concatenation.in", "r", stdin );
    freopen( "concatenation.out", "w", stdout );
	int t=1, cnt=0;
	// cin>> t;
	while(t--)
		RUN(cnt);
}
//DRIVER FUNCTION HERE
int cnt[30];
void RUN(int cntz)
{
	string s1, s2;
	cin>> s1>> s2;
    ll l1= s1.length(), l2= s2.length();
    ll ans= l1*l2;
    rep(i, 30) cnt[i]= 0;

    for(int i=1; i<l1; i++) cnt[s1[i]-'a']++;

    rep(i, l2-1) ans-=cnt[s2[i]-'a'];

    Out(ans);
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