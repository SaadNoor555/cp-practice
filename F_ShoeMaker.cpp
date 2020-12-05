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
// #include<conio.h>

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
bool cmp(vint a, vint b)
{
    return (a[1]*b[2])<(b[1]*a[2]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    // t=1;
    FOR(test, t, 1)
    {
        // char ch;
        // getchar();
        int n, ti, s;
        cin>> n;
        vector<vector<int>> job;
        FOR(i, n, 1)
        {
            cin>> ti>> s;
            job.PB({i+1, ti, s});
        }
        sort(job.begin(), job.end(), cmp);

        FOR(i, n, 1)
        {
            cout<< job[i][0];
            if(i!=n-1) cout<< " ";
        }
        cout<<"\n";
        if(test!=t-1) cout<< "\n";
    }
    return 0;
}