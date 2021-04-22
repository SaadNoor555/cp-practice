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

const ll MOD= 1000000007;

using namespace std;

void RUN(int cntz);

ll pow_a_b(ll a, ll b, ll mod);

vll fv(200005);
void fac();

template<typename T>
T GCD(T a, T b);


int main()
{
	int t=1, cnt=0;
	cin>> t;
    fac();
	while(t--)
		RUN(++cnt);
}
//DRIVER FUNCTION HERE
void RUN(int cntz)
{
    ll man= 0;
    rep(i, 64)
        man|=(1<<i);

	int n;
	cin>> n;
    vll seq(n);
    rep(i, n)
    {
        cin>> seq[i];
        man&=seq[i];
    }

    int mv= 0;
    rep(i, n)
        mv+=(man==seq[i]);

    if(mv<2) Out(0);
    else Out((((fv[mv]*fv[n-2])%MOD)*pow_a_b(fv[mv-2], MOD-2, MOD))%MOD);
}

void fac()
{
    fv[0]= 1;
    rep(i, 200003)
        fv[i+1]=((i+1)*fv[i])%MOD;
        
    // fv[0]= 0;
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