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

string ys= "It is a kind of magic";
string no= "There are no miracles in life";

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
	ll a, b, c, x, y, z;
	cin>> a>> b>> c;
    cin>> x>> y>> z;

    if((a+b+c)>=(x+y+z))
    {
        ll areq=0, breq=0, creq=0;
        areq= max(areq, x-a);
        breq= max(breq, y-b);
        if(c-areq-breq>=z) Out(ys);
        else if(c<z)
        {
            Out("hi");
            areq= max(0ll, a-x);
            breq= max(0ll, b-y);
            if(a>=x && b>=y && c+areq+breq>=z) Out(no);
            else Out(ys);
        }
        else Out(ys);
    }
    else Out(no);
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