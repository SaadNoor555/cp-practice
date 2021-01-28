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
string s;

void foo(int op, int sz)
{
    if(!sz) return;
    string cln, mxm('0', s.length()-1);
    
    rep(i, s.length())
        if(s[i]-'0'==op)
        {
            cln= s;
            cln.erase(i, 1);
            mxm= max(mxm, cln);
        }

    s= mxm;
    foo(op, --sz);
}
//DRIVER FUNCTION HERE
void RUN(int cntz)
{
    cin>> s;
    // string cp= s;
    vector<string> cp(9, s);
    
    int n[9];
    rep(i, 9)
        cin>> n[i];

    rep(i, 9)
    {
        s= cp[i];
        int j= i;
        
        for(int j= 0; j<9; j++)
        {
            if((i+j)%10==0);
            else foo();
        }

        cp[i]= s;
    }
    sort(cp.begin(), cp.end(), greater<string>());
    // for(int i=8; i>=0; i--)
    //     foo(i+1, n[i]);
    Out(cp[0]);
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