
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
#define Case(n, ans) printf("Case %d: %d\n", n, ans);
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

void InAr(int *ar, int n)
{
  FOR(i, n, 1) cin>> ar[i];
}

bitset<200000> pos;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    pos[0]=1;
    // t=1;
    FOR(x, t, 1)
    {
        int n, m, an=0;
        cin>> n>> m;
        int a[n], c[n];
        
        InAr(a, n);
        InAr(c, n);

        FOR(i, n, 1)
            FOR(j, c[i], 1)
                pos|=(pos<<a[i]);

        for(int i=1; i<=m; i++)
            an+=(pos[i]), pos[i]=0;

        Case(x+1, an);
    }
}