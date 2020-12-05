
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

#define FOR(iterator, in,  limit, adder) for(int iterator=in; iterator<limit; iterator+=adder)
#define PI 						3.1415926535897932384626433832795
#define PB 						push_back
#define OutNO 					cout<<"No\n"
#define OutYES 					cout<<"Yes\n"
#define Out(n) 					cout<< n<<"\n"
#define Out2(n, k)				cout<< n<< " "<< k<< "\n";
#define Out3(n, k, p)			cout<< n<< " "<< k<< " "<< p<< "\n";
#define Debug(x)        		cout<< #x<< ": "<< x<< "\n";
#define Debug2(x, y)			cout<< #x<< ": "<< x<< "\t"<< #y<< ": "<< y<< "\n";
#define Debug3(x, y, z)			cout<< #x<< ": "<< x<< "\t"<< #y<< ": "<< y<< "\t"<< #z<<": "<< z<<"\n";
#define In(n) 					cin>> n
#define In2(a, b) 				cin>> a>> b
#define Case(n, ans) 			cout<< "Case "<< n<< ": "<< ans<< "\n"
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

vint InVin(int n)
{
	int tmp;
	vint a;
	FOR(i, 0, n, 1)
	{
		cin>> tmp;
		a.PB(tmp);
	}
	return a;
}

vll InVll(int  n)
{
	int tmp;
	vll a;
	FOR(i, 0, n, 1)
	{
		cin>> tmp;
		a.PB(tmp);
	}
	return a;
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

vint Dijkstra(int source, int n, vector<vpiin> graph)
{
    vint cost(n, 99999);
	cost[source]= 0;
	vector<vint> ans(n);
    int active;
    priority_queue<piin, vpiin,greater<piin>> pq;
    pq.push({0, source});
	bitset<100001> visited;
	// cout<<pq.size()<<"\n";
	// FOR(i, n, 1) cout<< graph[i].size()<< " ";
	// cout<< "\n";
    while(!pq.empty())
    {
        active= pq.top().second;
        pq.pop();
		if(visited[active]) continue;
		visited[active]= 1;
		// cout<< active<< " "<< cost[active]<<"\n";
        FOR(i, 0, graph[active].size(), 1)
        {
			piin buf= graph[active][i];
            if(cost[buf.second]>buf.first+cost[active])
            {
                cost[buf.second]= buf.first+cost[active];
				ans[buf.second]= ans[active];
				ans[buf.second].PB(active);
                pq.push({cost[buf.second], buf.second});
            }
        }
		// cout<<"hi\n";
    }
	return cost;
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

void foo(int cnt)
{
    int p, d, m, s;
    cin>> p>> d>> m>> s;
    int an=0;
    while(s>0)
    {
        if(s-p>=0) 
        {
            s-=p;
            if(p-d>=m)p-=d;
            else p= m;
            an++;
        }
        else break;
    }
    Out(an);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1, c=0;
    // cin>> t;
    
    while(t--)
	{
		foo(++c);
	}
}