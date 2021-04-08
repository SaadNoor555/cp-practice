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

void Sieve();

int main()
{
	int t=1, cnt=0;
    Sieve();
	cin>> t;
	while(t--)
		RUN(++cnt);
}

vint pr;
vint npr;
int ps= 0;
const int mx= 1000001;
bool prime[mx];

void Sieve()
{
    ps= 0;
    
    memset(prime, 1, sizeof prime);

    for(int p=2; p*p<=mx; p++)
        if(prime[p])
            for(int i=p*p; i<=mx; i+=p)
                prime[i]=0;

    pr.push_back(1);
    for(int i=2; i<=mx; i++)
        if(prime[i]) pr.push_back(i);


    for(int i=2; i<=mx; i++)
        if(!prime[i]) npr.push_back(i);
}


//DRIVER FUNCTION HERE
void RUN(int cntz)
{
	int t, n, k;
	cin>> t>> n>> k;
    // Sieve(n);
    // vint D;
    // int map[n+1];

    ps= upper_bound(pr.begin(), pr.end(), n)-pr.begin();
    // int j= 0;
    // for(int i=0; i<ps; i++)
    // {
    //     D.push_back(pr[i]);
    //     map[pr[i]]= ++j;
    // }
    // for(int i=0; npr[i]<=n; i++)
    // {
    //     D.push_back(npr[i]);
    //     map[npr[i]]=  ++j;
    // }

    // if(t==2) Out(D[k-1]);
    // else Out(map[k]);


    if(t==1)
    {
        int ans;
        if(prime[k]) ans= lower_bound(pr.begin(), pr.end(), k)-pr.begin();
        else ans= ps+lower_bound(npr.begin(), npr.end(), k)-npr.begin();
        Out(ans+1);
    }
    else
    {
        int ans;
        if(k<=ps) ans= pr[k-1];
        else ans= npr[k-ps-1];
        Out(ans);
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