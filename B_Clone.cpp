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
        FOR(i, graph[active].size(), 1)
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

map<char, int> keys;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    keys.insert({'a', 1});
    keys.insert({'b', 2});
    keys.insert({'c', 3});
    keys.insert({'d', 1});
    keys.insert({'e', 2});
    keys.insert({'f', 3});
    keys.insert({'g', 1});
    keys.insert({'h', 2});
    keys.insert({'i', 3});
    keys.insert({'j', 1});
    keys.insert({'k', 2});
    keys.insert({'l', 3});
    keys.insert({'m', 1});
    keys.insert({'n', 2});
    keys.insert({'o', 3});
    keys.insert({'p', 1});
    keys.insert({'q', 2});
    keys.insert({'r', 3});
    keys.insert({'s', 4});
    keys.insert({'t', 1});
    keys.insert({'u', 2});
    keys.insert({'v', 3});
    keys.insert({'w', 1});
    keys.insert({'x', 2});
    keys.insert({'y', 3});
    keys.insert({'z', 4});
    keys.insert({' ', 1});

    int t;
    cin>> t;
    // t=1;
    for(int x=1; x<=t; x++)
    {
        char s[110];
        int an=0;
        scanf("%[^\n]%*c", s);
        FOR(i, strlen(s), 1)
            an+= keys[s[i]];

        cout<< "Case  #"<< x<<": "<<an<< "\n";
    }
}