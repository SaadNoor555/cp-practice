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

template<typename T>
T GCD(T a, T b);

int cntDigit(ll n);

int main()
{
	int t=1, cnt=0;
	cin>> t;
	while(t--)
		RUN(++cnt);
}
//DRIVER FUNCTION HERE
void RUN(int cntz)
{
	ll n, m, ans=0, tmp;
	cin>> n>> m;
    vint tan(10, -1);
    while(n)
    {
        tmp= n%10;
        if(tan[tmp]==-1)
            tan[tmp]=cntDigit(tmp+m);

        ans=(tan[tmp]+ans)%10;
        n/=10;
    }
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

int cntDigit(ll n)
{
    int sz=0;
    while(n)
    {
        sz++;
        n/=10;
    }
    return sz;
}

template<typename T>
T GCD(T a, T b)
{
	if(!b) return a;
	return GCD(b, a%b);
}