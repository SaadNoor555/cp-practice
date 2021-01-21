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
ll dp[2510];

void cntval(string s, int x)
{
    ll val= 0;
    for(int i=0; i<s.length(); i++)
        val+=(int)s[i];

    dp[x]= val;
}

struct OpS
{
    string op;
    int x, l, r;
};

OpS cur[2510];
// void solve
queue wr;

ll f(int nw)
{
    if(dp[nw]) return dp[nw];

    if(cur[nw].op=="APP")
    {
        dp[nw]+=f(cur[nw].l);
        dp[nw]+=f(cur[nw].r);
    }
    else
    {
        for(int i=l; i<)
    }

}

void RUN(int cntz)
{
	int n;
	cin>> n;
    string s, op;
    int l, r, x;
    cin>> s;
    cntval(s, 0);
    
    
    rep(i, n-1)
    {
        cin>> cur[i+1].op;
        if(cur[i+1].op=="SUB") cin>> cur[i+1].x>> cur[i+1].l>> cur[i+1].r;
        else cin>> cur[i+1].l>> cur[i+1].r;
    }
    
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