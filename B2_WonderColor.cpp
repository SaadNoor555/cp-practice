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
	cin>> t;
	while(t--)
		RUN(++cnt);
}
//DRIVER FUNCTION HERE



struct trip
{
    int val, pos, col;
};


bool cmp(struct trip A, struct trip B)
{
    return A.val< B.val;
}

bool cmp1(struct trip A, struct trip B)
{
    return A.pos< B.pos;
}


void RUN(int cntz)
{
	int n, k, tmp;
	cin>> n>> k;
    vector<struct trip> ans(n);
    vector<bool> clcnt(n+1, 0);

    rep(i, n)
    {
        cin>> ans[i].val;
        ans[i].pos= i;
    }

    sort(ans.begin(), ans.end(), cmp);

    int cur, prev=0, clr=1, cot=1, rv= 0;

    rep(i, n)
    {
        cur= ans[i].val;
        if(cur==prev)cot++;
        else cot=1;

        if(cot<=k)
        {
            ans[i].col= clr;
            // clcnt[clr]++;
        }
        else 
        {
            rv++;
            continue;
        }
        clr%=k;
        clr++;
        prev= cur;
    }

    // sort(clcnt.begin(), clcnt.end());
    sort(ans.begin(), ans.end(), cmp1);

    // for(int i=1; i<n; i++) clcnt[i]-=1
    // Debug(rv);
    rep(i, (n-rv)%k)
        clcnt[i]= 1;

    rep(i, n) 
    {
        if(ans[i].col && clcnt[ans[i].col-1])
        {
            clcnt[ans[i].col-1]= 0;
            ans[i].col= 0;
        }
        cout<< ans[i].col<< ' ';
    }
    Out("");
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