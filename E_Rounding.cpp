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

struct Ser
{
    string s;
    double per;
};


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
    double tot=0;
	cin>> n;
    Ser ms[n];
    rep(i, n)
    {
        cin>> ms[i].s>> ms[i].per;
        tot+=ms[i].per;
    }

    double neg= max(100.0-tot-(0.49*(n-1)), -0.50);
    double pos= min(100.0-tot+(0.50*(n-1)), 0.49);

    // cout<< neg<< ' '<< pos<< '\n';
    if(neg>pos) Out("IMPOSSIBLE");
    else 
    {
        rep(i, n)
        {
            cout<< ms[i].s<< ' ';
            printf("%.2lf %.2lf\n", max(0.0, ms[i].per+neg), min(100.0, ms[i].per+pos));
        }
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