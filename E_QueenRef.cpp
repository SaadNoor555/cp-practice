/*Never Give up -- Life is to short to make mistakes and learn from them -- Learn from other's mistakes*/
 
/* Remember you were always a novice when you started so never be rude to some one*/
 
/* Never open ranklist untill you are done solving problems (wastes a lot of time and motivation)
 
/* Aim Big and strive hard to get it */ 
 
/* Waiting to become purple */
 
/* One has his own set of talents and anyone can do anything so never compare yourself to anybody*/
 
#include <iostream>
#include <cstdio>
#include <numeric>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <climits>
#include <vector>
#include <bitset>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <deque>
#include <string>
#include <list>
#include <iterator>
#include <algorithm>
#include <unordered_map>
#define int                long long
#define pb                 push_back
#define pi                 pair<int,int>
#define vi                 vector<int>
#define all(v)             v.begin(),v.end()
#define MOD                1000000007
#define F                  first
#define S                  second
#define FOR(i,r)           for(int i=0;i<r;i++)
#define REP(i,l,r)         for(int i=l;i<r;i++)
#define RER(i,l,r)         for(int i=l;i>=r;i--)
#define print(v)           for(auto i : v)cout << i << ' ';
#define FASTIO             ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mem(arr,k)         memset(arr,k,sizeof(arr));
#define pii                acos(-1.0)
#define PI                 3.1415926535897932385
#define Sin(a)             sin((pi*a)/180)
#define remax(a,b)         a=max(a,b)
#define remin(a,b)         a=min(a,b)
#define bitcount(x)        __builtin_popcountll(x)
#define iceil(n,x)         (((n)-1)/(x)+1)
#define flush              fflush(stdout)
#define pf                 push_front()
#define pob                pop_back()
#define ins                insert
#define mii                map<int,int> 
#define show(x)            for(auto zz:x)cout<<zz<<" ";cout<<"\n";
#define show2(x)           for(auto zz:x)cout<<zz.F<<" "<<zz.S<<"\n";
#define test()             int x;cin >> x;while(x--){solve();}
#define test2()            int x;cin >> x;for(int i=1;i<=x;i++){cout << "Case #" << i << ": ";solve();}
#define watch(x)           cout << (#x) << " is " << (x) << endl
#define scn(x)             scanf("%lld",&x)
using namespace std;
 
 
/* Mathematical Functions */
int power(int x,int y);
bool isPrime(int n);
int modInv(int a,int b);
int gcdExtended(int a,int b,int *x,int* y);
int mpower(int a,int b,int p);
bool sorted(vector<int>v,int n,int strict);
 
const int inf = (int)1e17;
const int N = (int)3e5+5;
 
void solve(){
 
	int h,w;
	cin >> h >> w;
 
	int reach_from_any[h][w],reach_from_up[h][w],reach_from_diagnol[h][w],reach_from_left[h][w];
 
	char grid[h][w];
 
	mem(reach_from_left,0);
	mem(reach_from_diagnol,0);
	mem(reach_from_up,0);
	mem(reach_from_any,0);
 
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin >> grid[i][j];
		}
	}
 
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(i == 0 && j == 0){
				reach_from_up[i][j] = 1;
				reach_from_diagnol[i][j] = 1;
				reach_from_any[i][j] = 1;
				reach_from_left[i][j] = 1;
				continue;
			}
			if(grid[i][j] == '#'){
				reach_from_up[i][j] = reach_from_diagnol[i][j] = reach_from_any[i][j] = reach_from_left[i][j] = 0;
			}
			else{
				if(i-1 >= 0){
					reach_from_up[i][j] = reach_from_up[i-1][j];
				}
				if(j-1 >= 0){
					reach_from_left[i][j] = reach_from_left[i][j-1];
				}
				if(i-1 >= 0 && j-1 >= 0){
					reach_from_diagnol[i][j] = reach_from_diagnol[i-1][j-1];
				}
				reach_from_any[i][j] = reach_from_diagnol[i][j] + reach_from_left[i][j] + reach_from_up[i][j];
 
				reach_from_any[i][j] %= MOD;
 
				reach_from_up[i][j] += reach_from_any[i][j];
				reach_from_diagnol[i][j] += reach_from_any[i][j];
				reach_from_left[i][j] += reach_from_any[i][j];
 
				reach_from_left[i][j] %= MOD;
				reach_from_up[i][j] %= MOD;
				reach_from_diagnol[i][j] %= MOD;
			}
		}
	}
 
	
	cout << reach_from_any[h-1][w-1] << "\n";
}
int32_t main(){
  FASTIO;
  clock_t start,end;
  start = clock();
 
  solve();
 
  end = clock();
  double time_taken = double(end - start) / (double)CLOCKS_PER_SEC;
  //cout << fixed << setprecision(5) << time_taken << "\n";
  return 0;
 
}
int modInv(int a, int m)
{
int x, y;
int g = gcdExtended(a, m, &x, &y);
int res = (x%m + m) % m;
return res;
}
 
int gcdExtended(int a, int b, int *x, int *y)
{
if (a == 0){
    *x = 0, *y = 1;
    return b;
  }
  int x1, y1;
  int gcd = gcdExtended(b%a, a, &x1, &y1);
  *x = y1 - (b/a) * x1;
  *y = x1;
  return gcd;
}
 
int mpower(int x, int y, int p)
{
int res = 1;
x = x % p;
while(y > 0){
    if(y & 1) res = (res*x) % p;
      y = y>>1;
      x = (x*x) % p;
    }
    return res;
}
int power(int x, int y)
{
int res = 1;
while (y > 0){
    if (y & 1) res = res*x;
      y = y>>1;
      x = x*x;
    }
    return res;
}
 
bool isPrime(int n)
{
if (n <= 1)  return false;
  if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
      int p=sqrt(n);
      for(int i=5;i<=p;i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
          return false;
      return true;
}
bool sorted(vector<int>v,int n,int strict){
  if(n <= 1)
    return 1;
  for(int i=1;i<n;i++){
    if(strict){
      if(v[i] <= v[i-1])
        return 0;
      }
    else{
      if(v[i] < v[i-1])
        return 0;
    }
  }
  return 1;
}