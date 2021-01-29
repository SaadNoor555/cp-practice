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

bool cmp(piin a, piin b)
{
    if(a.first!=b.first) return a.first<b.first;
    return a.second<b.second;
}

void RUN(int cntz)
{
	int n, tmp, sz;
	cin>> n;
    // int mxm[n], mnm[n];
    piin box[n];
    vint fgs, mip[n];
    
    vint mnm(n, 100001);
    vint mxm(n, -1);
    // memset(mnm, 100001, sizeof mnm);
    // memset(mxm, -1, sizeof mxm);
    bool flg= 1;
    rep(i, n)
    {
        cin>> sz;
        rep(j, sz)
        {
            cin>> tmp;
            mip[i].push_back(tmp);
            mxm[i]= max(mxm[i], tmp);
            mnm[i]= min(mnm[i], tmp);
            // Debug(mnm[i]);
        }
        // Debug(mnm[i]);
    }
    rep(i, n)
    {
        // Debug(flg);
        if(!flg) break;
        flg&= is_sorted(mip[i].begin(), mip[i].end());
    }
    rep(i, n) box[i]= {mnm[i], mxm[i]};

    sort(box, box+n, cmp);

    rep(i, n)
    {
        fgs.push_back(box[i].first);
        fgs.push_back(box[i].second);
        // cout<< box[i].first<< ' '<< box[i].second<< ' ';
    }
    // Out("");
    flg&= is_sorted(fgs.begin(), fgs.end());
    flg? Out("YES") : Out("NO");
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