#include<bits/stdc++.h>
#include <algorithm>
#define M 100001

using namespace std;
bool flag[M]={false};
long long last[M]={-1};
long long P[M]={0};

long long parent[100001];
long long cnt=0;


long long d[400091];


 
int main()
{
	long long n;
    cin>>n;

    long long a[n+1];
    long long b[n+1];

    long long pos[n+1],mx=INT_MIN,mx1=INT_MIN,pos1[n+1];
    
    memset(d,0,sizeof(d));

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pos[a[i]]=i;
        
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
        pos1[b[i]]=i;
    }

    for(int i=1 ;i<=n; i++)
    {
        if(pos[i]>=pos1[i]) d[pos[i]-pos1[i]]++;
        else d[n-(pos1[i]-pos[i])]++;
    }

    sort(d,d+n,greater<int>());

    cout<<d[0]<<"\n";




    
}