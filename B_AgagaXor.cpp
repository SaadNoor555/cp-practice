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
	int n;
	cin>> n;
    int xr=0;
    vint ar(n);
    rep(i, n)
    {
        cin>> ar[i];
        xr^=ar[i];
    }
    // Out(xr);
    if(!xr) Out("YES");
    else
    {
        int i=0;
        while(i<ar.size()-1)
        {
            if(ar[i]!=xr && i<ar.size()-1)
            {
                ar[i]= ar[i]^ar[i+1];
                ar.erase(ar.begin()+i+1);
            }
            if(ar[i]==xr) i++;
        }
        sort(ar.begin(), ar.end());
        // Out("here");
        while(*ar.begin()==0) ar.erase(ar.begin());
        if(ar.size()>1 && ar[0]==ar[ar.size()-1]) Out("YES");
        else Out("NO");
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