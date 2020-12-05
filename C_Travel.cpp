#include<bits/stdc++.h>

typedef long long ll;

using namespace std;


int main()
{
    int n, c=0;
    ll k, tmp;
    cin>> n>> k;

    vector<vector<ll>> graph(n);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>> tmp;
            graph[i].push_back(tmp);
        }

    string per= "";

    for(int i=1; i<n; i++)
        per+=(i+'1');

    do
    {
        ll an=0;
        int prev= 0;
        for(int i=0; i<n-1; i++)
        {
            an+= graph[prev][per[i]-'1'];
            prev= per[i]-'1';
        }
        an+=graph[per[n-2]-'1'][0];
        c+=(an==k);
    } while (next_permutation(per.begin(), per.end()));
    cout<< c<< "\n";
}