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

double AREA(double a, double b, double c)
{
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

void RUN(int cntz)
{
	int n;
    double tmp;
	cin>> n;
    vector<double> a;
    rep(i, n)
    {
        cin>> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());
    double minm= 9000000;
    bool flag= 0;
    // rep(i, n) cout<< a[i]<< ' ';
    // cout<< '\n';
    if(n>2)
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            // int j= i+1;
            double sr= a[i]+a[j], ar1= 9000000, ar2= 9000000;
            int l= lower_bound(a.begin(), a.end(), sr)- a.begin();
            if(l-1>j)
            {
                ar1= AREA(a[i], a[j], a[l-1]);
                ar2= AREA(a[i], a[j], a[j+1]);
                flag= 1;
            }
            minm= min({ar1, ar2, minm});
        }
    }

    flag? cout<< setprecision(10)<< minm<< '\n' : Out(-1);
    
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