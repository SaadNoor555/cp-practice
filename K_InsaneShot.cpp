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

#define Deb2(x, y)					cout<< #x<< ": "<< x<< '\t'<< #y<< ": "<< y<< '\n'
#define rep(i, n)						for(int i=0; i<n; i++)
#define Out(output)						cout<< output<< '\n'
#define Debug(x)						cout<< #x<< ": "<< x<< '\n'
#define Debug2(x, y)					cout<<setprecision(10)<< x<< ' '<< y<< '\n'
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
    setprecision(10);
	int t=1, cnt=0;
	// cin>> t;
	while(t--)
		RUN(cnt);
}
// DRIVER FUNCTION HERE
// double ox, oy, x1, x2, y1, y2, r;
double dist(double a, double b, double c, double x, double y)
{
    c=-c;
    return (abs(a*x+b*y+c))/sqrt(a*a + b*b);
}

void RUN(int cntz)
{
    double ox, oy, x1, x2, y1, y2, r;
    double m1, c;
	cin>> ox>> oy>> r;
    cin>> x1>> y1;
    cin>> x2>> y2;

    double a1, b1, c1;
    // if()double ms= (y2-y1)/(x2-x1);
    b1= x2-x1;
    a1= y1-y2;
    c= x1*a1+y1*b1;

    double dis= (abs(a1*ox+b1*oy+c))/sqrt(a1*a1+b1*b1);
    if(dis<=r)
    {
        Out("No way");
        return;
    }

    if(y1==y2)
    {
        double any1= oy+r;
        double any2= oy-r; 
        double anx= ox;
        double ea, eb, ec;
        ea= y1-y2;
        eb= x2- x1;
        ec= ea*x1+eb*y1;
        // Deb2(ea, eb);
        if(dist(ea, eb, ec, anx, any1)< dist(ea, eb, ec, anx, any2)) Debug2(anx, any1);
        else Debug2(anx, any2);
        return;
    }

    m1= (x1-x2)/(y2-y1);
    c= oy- m1*ox;

    double p= 1+m1*m1;
    double q= -2*(ox- m1*c+ m1*oy);
    double f= ox*ox+ oy*oy+ c*c- r*r- 2*c*oy;
    // Debug(p);
    double px1=0, px2=0, py1=0, py2=0;
    px1= (-q+sqrt(max(q*q-4*p*f, double(0))))/(2*p);
    px2= (-q-sqrt(max(q*q-4*p*f, double(0))))/(2*p);
    py1= m1*px1+c;
    py2= m1*px2+c;

    double da, db, dc;
    da= y1-y2;
    db= x2-x1;
    dc= +da*x1+db*y1;
    if(dist(da, db, dc, px1, py1)<dist(da, db, dc, px2, py2)) Debug2(px1, py1);
    else Debug2(px2, py2);
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