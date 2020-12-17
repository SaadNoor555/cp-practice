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

#define PI 3.1415926535897932
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

const double mini= 10e-15;

int main()
{
	int t=1, cnt=0;
	cin>> t;
	while(t--)
		RUN(cnt);
}
//DRIVER FUNCTION HERE
double finAng(double x, double y)
{
    if(!x) return 90;
    double m= y/x;
    double ang= atan(m);
    // cout<< ang*180*PI<< '\n';
    return (ang*180/PI);
}


pair<double, double> findPos(double ang, double l, double x, double y)
{
    // Debug2(x, y);
    double r= sqrt(x*x + y*y);
    double prev_ang= finAng(x, y);
    double newX, newY;
    // Debug(ang+prev_ang);
    double angle= (ang+prev_ang)*PI/180;
    newX= r*cos(angle);
    newY= r*sin(angle);

    return {newX+l, newY};
}


void RUN(int cntz)
{
	double ang, l;
    pair<double, double> an={0, 0};
    ll n, cc=0;
    cin>> ang>> l>> n;
    vector<pair<double, double>> ans;
    // Out(cc);
    // n%=cc;
    ans.push_back({0, 0});
    // if(n) ans.push_back({l, 0}), cc++, an={l, 0};
    for(int i=1; i<130; i++)
    {
        pair<double, double> tmp= findPos(ang, l, an.first, an.second);
        // Debug2(an.first, an.second);
        cc++;
        if(tmp.first<=mini && tmp.second<=mini) break;
        // if(finAng(tmp.first, tmp.second)==0 || finAng(tmp.first, tmp.second)==360) break;
        // Debug(finAng(tmp.first, tmp.second));
        an= tmp;
        ans.push_back(an);
    }
    rep(i, cc) cout<< ans[i].first<< ' '<< ans[i].second<< '\n';
    Debug(ans.size());
    an=ans[n%ans.size()];
    cout<< an.first<< ' '<< an.second<< '\n';
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