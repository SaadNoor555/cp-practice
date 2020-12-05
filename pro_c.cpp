
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

#define FOR(iterator, in,  limit, adder) for(int iterator=in; iterator<limit; iterator+=adder)
#define PI 						3.1415926535897932384626433832795
#define PB 						push_back
#define OutNO 					cout<<"NO\n"
#define OutYES 					cout<<"YES\n"
#define Out(n) 					cout<< n<<"\n"
#define In(n) 					cin>> n
#define In2(a, b) 				cin>> a>> b
#define Case(n, ans) 			printf("Case %d: %lld\n", n, ans)
#define vint 					vector<int>
#define vll 					vector<ll>
#define vpiin 					vector<pair<int, int>>
#define vpll					vector<pair<ll, ll>>
#define piin 					pair<int, int>
#define pll						pair<ll, ll>
#define qint 					queue<int>
#define ELIF 					else if
#define RED 					1
#define BLACK 					2

typedef long int 				int32;
typedef unsigned long int 		uint32;
typedef long long int 			int64;
typedef unsigned long long int  uint64;
typedef long long 				ll;

using namespace std;

void InArll(ll *ar, int n)
{
  FOR(i, 0, n, 1) cin>> ar[i];
}

void OutArll(ll *a, int n)
{
  FOR(i, 0, n, 1) cout<< a[i]<<" ";
  cout<<"\n";
}

void InAr(int *ar, int n)
{
  FOR(i, 0, n, 1) cin>> ar[i];
}

void OutAr(int *a, int n)
{
  FOR(i, 0, n, 1) cout<< a[i]<<" ";
  cout<<"\n";
}

void OutVin(vint a)
{
    FOR(i, 0, a.size(), 1)
        cout<< a[i]<< " ";

    cout<< "\n";
}

void OutVll(vll a)
{
    FOR(i, 0, a.size(), 1)
        cout<< a[i]<< " ";

    cout<< "\n";
}

ll count(ll *a, int n, ll v)
{
	ll c=0;
	FOR(i, 0, n, 1)
		if(a[i]>=v) c++;

	return c;
}

void MEMSETll(ll *a, int n, ll v)
{
	FOR(i, 0, n, 1)
		a[i]= v;
}

void MEMSET(int *a, int n, int v)
{
	FOR(i, 0, n, 1)
		a[i]= v;
}

void MEMSETbool(bool *a, int n, bool v)
{
	FOR(i, 0, n, 1)
		a[i]= v;
}

int gcd(int a, int b) 
{
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    // t=1;
    FOR(x, 1, t+1, 1)
    {
        ll n, d, c;
        cin>> n>> d>> c;

        ll sz[n];
        InArll(sz, n);
        sort(sz, sz+n);
        
        ll ans= n*d, mxs;

        FOR(i, 0, n, 1)
        {
            mxs= ((i+1)*c*sz[i])+(d*(n-i-1));
            ans= min(ans, mxs);
        }
            
        Case(x, ans);
    }
}