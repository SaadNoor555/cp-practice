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
#define PI 				3.1415926535897932384626433832795
#define PB 				push_back
#define OutNO 			cout<<"NO\n"
#define OutYES 			cout<<"YES\n"
#define Out(n) 			cout<< n<<"\n"
#define In(n) 		  	cin>> n
#define In2(a, b)     	cin>> a>> b
#define Case(n, ans)  	printf("Case %d: %d\n", n, ans);
#define vint          	vector<int>
#define vll           	vector<ll>
#define vpiin         	vector<pair<int, int>>
#define piin          	pair<int, int>
#define qint          	queue<int>
#define ELIF 			else if
#define RED           	1
#define BLACK         	2
 
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
 
vll pf;
map<ll, ll> mp;
 
void primefac(ll q)
{

     
        FOR(i, 2, sqrt(q)+1, 1)
        {
            while(!(q%i))
            {
                mp[i]++;
                pf.PB(i);
                q/=i;
            
            }
        }
        if(q!=1)mp[q]++;
    
    
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    // t=1;
    while(t--)
    {
        ll p, q, an=0;
        In2(p, q);
 
        primefac(q);
        // for(auto x:mp) cout<< x.first<< " "<< x.second<< '\n';
        // Out("");
        // mp[1]++;
        if(p%q)
        {
            Out(p);
            pf.clear();
            continue;
        }
        ll ans=1;
        for(auto x:mp)
        {   ll temp=p;
            ll cnt=0;
            while(!(temp%x.first)){
                // x.first--
                temp/=x.first;
                // Out(temp);
                cnt++;
                if(temp && p%temp==0 && temp%q){
                    ans=max(ans,temp);
                }
            }
        }
        Out(ans);

        pf.clear();
    }
}