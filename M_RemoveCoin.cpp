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
	int n, cnt=0;
	cin>> n;
    string s;
    cin>> s;
    vint ans;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='D')
        {
            for(int j=i; j>=0; j--)
            {
                if(s[j]=='B' || s[j]== '*') break;
                cnt++;
                s[j]= '*';
                ans.push_back(j);
                if(j<n-1)
                {
                    if(s[j+1]=='B') s[j+1]= 'D';
                    else if(s[j+1]=='D') s[j+1]= 'B';
                }
                if(j)
                {
                    if(s[j-1]=='B') s[j-1]= 'D';
                    else if(s[j-1]=='D') s[j-1]= 'B';
                }
            }
        }
    }

    if(ans.size()==n)
    {
        Out('Y');
        for(auto x: ans) cout<< x+1<< ' ';
        Out("");
    }
    else Out('N');
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