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


int n, m;
bitset<25>room[25];

int maxper(int lvl, int pos)
{
    Debug2(lvl, pos);
    for(int i= lvl; i<n; i++)
        for(int j=pos; j<m; j++)
        {
            if(room[i][j])
            {
                int r1= (i-lvl+1)+(j-pos);
                int r2= (i-lvl)+(m-j);
                Debug2(i, j);
                return 2*max(r1, r2);
            }
        }

    return 2*((n-lvl)+(m-pos));
}

int main()
{
	int t=1, cnt=0;
	// cin>> t;
	while(t--)
		RUN(++cnt);
}
//DRIVER FUNCTION HERE
void RUN(int cntz)
{
	cin>> n>> m;
    int maxm=0;
    string s;
    rep(i, n)
    {
        cin>> s;
        rep(j, m) 
            room[i][j]= (s[i]=='1');
    }
    rep(i, n)
        rep(j, m)
            maxm= max(maxm, maxper(i, j));

    Out(maxm);
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