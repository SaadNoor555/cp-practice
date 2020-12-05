
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

#define ELIF else if
#define FOR(iterator, starter, limit, adder) for(int iterator=starter; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back
#define OutNO cout<<"NO\n"
#define OutYES cout<<"YES\n"
#define Out(n) cout<< n<<"\n"
#define Case(n, ans) printf("Case %d: %d\n", n, ans);
#define vint vector<int>
#define vll vector<ll>
#define vpiin vector<pair<int, int>>
#define piin pair<int, int>
#define qint queue<int>
#define RED 1
#define BLACK 2
// #define MOD 1000000007


typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

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


int dp[55][1005], a[55], c[55];
int n, s;
const int MOD= 1e8+7;

int f(int idx, int rem)
{
    if(!rem) return 1;
    if(idx==n) return 0;
    if(dp[idx][rem]!=-1) return dp[idx][rem];
    
    dp[idx][rem]=0;
    FOR(j, 0, c[idx]+1, 1)
        if(rem-a[idx]*j>=0) 
        {
            dp[idx][rem]+=f(idx+1, rem-a[idx]*j);
            dp[idx][rem]%=MOD;
        }

    return dp[idx][rem];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t;
    cin>> t;
    FOR(x, 0, t, 1)
    {
        cin>> n>> s;

        InAr(a, n);
        InAr(c, n);

        memset(dp, -1, sizeof dp);
        Case(x+1, f(0, s));
    }

}