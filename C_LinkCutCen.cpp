#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MOD 1
using namespace std;
 
int countWays(int n) 
{ 
    int A[n + 1], B[n + 1]; 
    A[0] = 1, A[1] = 0, B[0] = 0, B[1] = 1; 
    for (int i = 2; i <= n; i++) { 
        A[i] = A[i - 2] + 2 * B[i - 1]; 
        B[i] = A[i - 1] + B[i - 2]; 
    } 
  
    return A[n]; 
} 
 
void in(ll a[],ll n){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
 
void out(ll a[],ll n){
	for(int i=0;i<n;i++)
	cout<<a[i];
	
	//cout<<"\n";
}
bool prime[1001];
 
bool cmp(pair<ll,ll>p1,pair<ll,ll>p2){
	return p1.first<p2.first;
}
 
bool cmp2(pair<ll,ll>p1,pair<ll,ll>p2){
	if(p1.second==p2.second)
	return p1.first<p2.first;
	else
	return p1.second>p2.second;
	
}
 
 
ll mul(ll n,ll k){
	ll res=1;
	//n=n%MOD;
	while(k){
		if(k%2==1){
			//res=(res*n)%MOD;
			res=(res*n);
		}
		k/=2;
	//	n=(n*n)%MOD;
		n=(n*n);
	}
	return res;
}
 
ll count(ll a[],ll n,ll p){
	ll c=0;
	
	for(int i=1;i<=n;i++){
		if(a[i]>=p)
		c++;
	}
	return c;
}

bool cmpf(vector<int>a, vector<int>b)
{
    return  a.size()<b.size();
}

vector<int> Centroid(const vector<vector<int>> &g) {
        int n = g.size();
        vector<int> centroid;
        vector<int> sz(n);
        function<void (int, int)> dfs = [&](int u, int prev) {
                sz[u] = 1;
                bool is_centroid = true;
                for (auto v : g[u]) if (v != prev) {
                        dfs(v, u);
                        sz[u] += sz[v];
                        if (sz[v] > n / 2) is_centroid = false;
                }
                if (n - sz[u] > n / 2) is_centroid = false;
                if (is_centroid) centroid.push_back(u);
        };
        dfs(0, -1);
        return centroid;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, x, y;
        cin>> n;
        vector<pair<int, int>> ed;
        vector<vector<int>> tr;
        for(int i=0; i<n-1; i++)
        {
            cin>> x>> y;
            // ed.pb({x, y});
            tr[x].pb(y);
            tr[y].pb(x);
        }
        int c1=-1, c2= -1;
        auto cent= Centroid(tr);
        if (cent.size() == 1) {
        c1= cent[0];
        //
        } else if (cent.size() == 2) {
        c1 = cent[0];
        c2 = cent[1];
        //
        }

        cout<< c1<< " "<< c2<< "\n";
    }
}