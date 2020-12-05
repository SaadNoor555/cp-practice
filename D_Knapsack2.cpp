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
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back
#define OutNO cout<<"NO\n"
#define OutYES cout<<"YES\n"
#define Out(n) cout<< n<<"\n"
#define vint vector<int>
#define vll vector<ll>
#define vpiin vector<pair<int, int>>
#define piin pair<int, int>
#define qint queue<int>
#define RED 1
#define BLACK 2


typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

using namespace std;

void InArll(ll *ar, int n)
{
  FOR(i, n, 1) cin>> ar[i];
}

void OutArll(ll *a, int n)
{
  FOR(i, n, 1) cout<< a[i]<<" ";
  cout<<"\n";
}

void InAr(int *ar, int n)
{
  FOR(i, n, 1) cin>> ar[i];
}

void OutAr(int *a, int n)
{
  FOR(i, n, 1) cout<< a[i]<<" ";
  cout<<"\n";
}

void OutVin(vint a)
{
    FOR(i, a.size(), 1)
        cout<< a[i]<< " ";

    cout<< "\n";
}

void OutVll(vll a)
{
    FOR(i, a.size(), 1)
        cout<< a[i]<< " ";

    cout<< "\n";
}

ll count(ll *a, int n, ll v)
{
	ll c=0;
	FOR(i, n, 1)
		if(a[i]>=v) c++;

	return c;
}

void MEMSET(ll *a, int n, int v)
{
	FOR(i, n, 1)
		a[i]= v;
}

int gcd(int a, int b) 
{
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

ll mem[110][100010];
ll v[105], wt[105];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    // cin>> t;
    t=1;
    while(t--)
    {
        int n, w;
        ll sum=0, ans=-1;
        cin>> n>> w;
        // mem[0]= 0;
        for(int i=1; i<=n; i++)
        {
            cin>> wt[i]>> v[i];
            sum+=v[i];
        }

        memset(mem, 0x3f, sizeof(mem));

        // FOR(i, n+1, 1)
        //     mem[i][0]= 0;

        mem[0][0]=0;

        for(int i=1; i<=n; i++)
            for(ll j=0; j<=sum; j++)
            {
                mem[i][j] = mem[i - 1][j];
                if (j - v[i] >= 0) mem[i][j] = min(mem[i - 1][j - v[i]] + wt[i], mem[i][j]);
                // cout<< i<< " "<<j<< ": "<< mem[i][j]<< "\n";
            }

        for (int i = sum; i >= 0; i--) 
            if (mem[n][i] <= w) 
            {
                ans = i;
                break;
            }       

        Out(ans);
    }
}