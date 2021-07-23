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


struct stats
{
    int aval=0, bval=0, cval=0, dval=0, eval=0;
};

int main()
{
	int t=1, cnt=0;
	cin>> t;
	while(t--)
		RUN(++cnt);
}
//DRIVER FUNCTION HERE
bool acmp(struct stats A, struct stats B)
{
    return A.aval>B.aval;
}

bool becmp(struct stats A, struct stats B)
{
    return A.bval>B.bval;
}

bool ccmp(struct stats A, struct stats B)
{
    return A.cval>B.cval;
}

bool dcmp(struct stats C, struct stats D)
{
    return C.dval>D.dval;
}

bool ecmp(struct stats A, struct stats B)
{
    return A.eval>B.eval;
}

void RUN(int cntz)
{
	int n;
	cin>> n;
    vector<string> s(n);
    vector<struct stats> cnt(n);

    rep(i, n) cin>> s[i];

    rep(i, n)
    {
        cnt[i].aval= 2*count(s[i].begin(), s[i].end(), 'a')-s[i].length();
        cnt[i].bval= 2*count(s[i].begin(), s[i].end(), 'b')-s[i].length();
        cnt[i].cval= 2*count(s[i].begin(), s[i].end(), 'c')-s[i].length();
        cnt[i].dval= 2*count(s[i].begin(), s[i].end(), 'd')-s[i].length();
        cnt[i].eval= 2*count(s[i].begin(), s[i].end(), 'e')-s[i].length();
    }

    int ans= 0, aw= 0, bw= 0, cw= 0, dw= 0, ew= 0;
    vint tmp(5, 0);

    sort(cnt.begin(), cnt.end(), acmp);
    rep(i, n)
    {
        if(cnt[i].aval+aw<=0) break;
        aw+=cnt[i].aval;
        tmp[0]++;
    }

    sort(cnt.begin(), cnt.end(), becmp);
    rep(i, n)
    {
        if(cnt[i].bval+bw<=0) break;
        bw+=cnt[i].bval;
        tmp[1]++;
    }

    sort(cnt.begin(), cnt.end(), ccmp);
    rep(i, n)
    {
        if(cnt[i].cval+cw<=0) break;
        cw+=cnt[i].cval;
        tmp[2]++;
    }

    sort(cnt.begin(), cnt.end(), dcmp);
    rep(i, n)
    {
        if(cnt[i].dval+dw<=0) break;
        dw+=cnt[i].dval;
        tmp[3]++;
    }
    
    sort(cnt.begin(), cnt.end(), ecmp);
    rep(i, n)
    {
        if(cnt[i].eval+ew<=0) break;
        ew+=cnt[i].eval;
        tmp[4]++;
    }
    // rep(i, 5) Debug(tmp[i]);
    ans= *max_element(tmp.begin(), tmp.end());

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