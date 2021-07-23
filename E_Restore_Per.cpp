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
void RUN(int cntz)
{
	int n, c=1;
	cin>> n;
    vint perm(n), lmin(n, 0), lmax(n, 0), elm(n, 0);

    rep(i, n)
    {
        cin>> perm[i];
        elm[i]= i+1;
    }

    lmin[0]=perm[0];
    lmax[0]=perm[0];
    elm[perm[0]-1]=n+1;

    for(int i=1; i<n; i++)
        if(perm[i]!=perm[i-1])
        {
            c++;
            lmin[i]= perm[i];
            lmax[i]= perm[i];
            elm[perm[i]-1]=n+1;
        }
    sort(elm.begin(), elm.end());
    auto it1= elm.end();
    elm.erase(it1-c, it1);
    
    int p=0, ref=lmax[0];
    rep(i, n)
        if(lmin[i]==0)
            lmin[i]= elm[p++];

    rep(i, n)
    {
        if(lmax[i]==0)
        {
            int f= lower_bound(elm.begin(), elm.end(), ref)-elm.begin();
            lmax[i]=elm[f-1];
            auto it2= elm.begin();
            elm.erase(it2+f-1);
        }
        else
            ref= lmax[i];
    }

    rep(i, n)
        cout<< lmin[i]<<' ';
    Out("");

    rep(i, n)
        cout<< lmax[i]<<' ';
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