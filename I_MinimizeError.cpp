#include<iostream>
#include<queue>
#include<algorithm>

#define ll long long

using namespace std;

priority_queue<ll>pq;

int main()
{
    ll n,m,k;
    cin >> n >> m >> k;
    ll x=m+k;
    ll a[n],b[n];

    for(ll i=0;i<n;i++)
        cin >> a[i];

    for(ll i=0;i<n;i++)
    {
        cin >> b[i];
        a[i]=abs(a[i]-b[i]);
        pq.push(a[i]);
    }
    while(x--)
    {
        ll y=pq.top();
        pq.pop();
        pq.push(abs(y-1));
    }

    ll ans=0;
    while(!pq.empty())
    {
        ans+=pq.top()*pq.top();
        pq.pop();
    }
    cout << ans << "\n";
}