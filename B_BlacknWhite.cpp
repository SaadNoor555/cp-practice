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
    freopen( "black.in", "r", stdin );
    freopen( "black.out", "w", stdout );
	int t=1, cnt=0;
	// cin>> t;
	while(t--)
		RUN(cnt);
}
//DRIVER FUNCTION HERE
void RUN(int cntz)
{
	int b, w;
    char pa= '@', sa= '.';
	cin>> b>> w;
    if(b>w) swap(pa, sa), swap(w, b);

    vector<string> ans;
    string ex= "";
    rep(i, 4) ex+=pa;

    while(b!=1)
    {
        string tmp= "", tmp1= "";
        rep(i, 4) tmp+=pa, tmp1+=sa;
        ans.push_back(tmp), ans.push_back(tmp1);
        b--, w--;
    }
    bool f=0;
    if(b)
    {
        ans.push_back(ex);
        b--;
    }
    while(w)
    {
        string ad="";
        rep(i, 4) ad+=pa;
        ad[f+1]= sa;
        f= !f;
        ans.push_back(ad);
        w--;
    }
    ans.push_back(ex);
    cout<< ans.size()<< ' '<< 4<< '\n';
    for(auto x: ans)
        Out(x);
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