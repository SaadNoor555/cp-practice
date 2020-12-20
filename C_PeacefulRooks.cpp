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
		RUN(cnt);
}
//DRIVER FUNCTION HERE
void RUN(int cntz)
{
	int n, m, c=0;
	cin>> n>> m;
    int x[m], y[m];
    // Debug(m);
    bool ver[n+1], hor[n+1];
    bool rev[n+1];
    memset(ver, 0, sizeof ver);
    memset(hor, 0, sizeof hor);
    memset(rev, 0, sizeof rev);

    rep(i, m)
    {
        cin>> x[i]>> y[i];
        hor[x[i]]= 1;
        ver[y[i]]= 1;
    }
    bool af= 0;
    rep(i, m)
    {
        // Out("here");
        if(x[i]!=y[i])
        {
            // Debug2(x[i], y[i]);
            // if(af) c++;
            if(!ver[x[i]]) 
            {
                c++;
                ver[x[i]]= 1;
                ver[y[i]]= 0;
                rev[x[i]]= 1;
            }
            else if(!hor[y[i]])
            {
                c++;
                hor[y[i]]= 1;
                hor[x[i]]= 0;
                rev[y[i]]= 1;
            }
            else
            {
                c+=2;
                hor[x[i]]= 0;
                ver[y[i]]= 0;
                
                // Debug2(x[i], y[i]);
                // for(int j= 1; j<=n; j++)
                // {
                //     if(!rev[j])
                //     {
                //         if(!hor[j] && !ver[j])
                //         {
                //             c+=2;
                //             hor[j]= 1;
                //             ver[j]= 1;
                //             rev[j]= 1;
                //             hor[x[i]]= 0;
                //             ver[y[i]]= 0;
                //             break;
                //         }
                //     }
                // }
            }
        }
        else rev[x[i]]= 1;
    }

    Out(c);
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