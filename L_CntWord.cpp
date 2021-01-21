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

vector<string> ans;
//DRIVER FUNCTION HERE
bool compare(string a, string b)
{
    int n1= a.length(), n2=b.length();

    if(n1!=n2) return false;

    rep(i, b.length())
    {
        char rp= b[0];
        b.erase(0, 1);
        b+=rp;
        if(a==b) return true;
    }
    return false;
}

void RUN(int cntz)
{
	int n;
	cin>> n;

    string s[n];
    rep(i, n) cin>> s[i];
    
    rep(i, n)
    {
        bool flag= 0;
        for(auto x: ans)
            flag|=compare(x, s[i]);

        if(!flag) ans.push_back(s[i]);
    }

    Out(ans.size());
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

