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
void RUN(int cntz)
{
	double x, y, n;
    int a1, a2;
	cin>> x>> y>> n;
    double frac, frac1, inp= (x/y), minf= 10005;
    // Debug(minf);
    for(int i=1; i<=n; i++)
    {
        double j= int((i*x)/y);
        frac1= ((j+1)/i);
        frac= (j/i);

        if(abs(frac-inp)<minf)
        {
            // Debug(minf);
            a1= j;
            a2= i;
            minf= abs(frac-inp);
        }
        if(abs(frac1-inp)<minf)
        {
            // Debug(minf);
            a1= j+1;
            a2= i;
            minf= abs(frac1-inp);
        }
    }
    // cout<< '\n';
    for(int i=min(a1, a2); i>1; i--)
    {
        if(!(a1%i) && !(a2%i))
        {
            a1/=i;
            a2/=i;
            i= min(a1, a2)-1;
        }
    }
    cout<< a1<< '/'<< a2<< '\n';
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