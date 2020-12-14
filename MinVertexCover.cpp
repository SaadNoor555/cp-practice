#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

bitset<100005>visited;
template<typename T>
//use array of vector for graph
pair<T, T> MinVertexCover(vector<T>*a, T u)
{
    T ac=1, rej=0;
    visited[u]=1;
    for(auto x: a[u])
    {
        T v= x;
        if(visited[v]) continue;
        pair<T, T>vp= MinVertexCover(a, v);
        ac+=min(vp.first, vp.second);
        rej+=vp.first;
    }
    return {ac, rej};
}

int main()
{
    int t=1, cs=0;
    // cin>> t;
    while(t--)
    {
        cs++;
        int n, u, v;
        cin>> n;
        vector<int> graph[n];
        for(int i=1; i<n; i++)
        {
            cin>>u>> v;
            graph[--u].push_back(--v);
            graph[v].push_back(u);
        }
        pair<int, int> ans= MinVertexCover<int>(graph, 0);
        cout<< min(ans.first, ans.second)<< '\n';
    }
}