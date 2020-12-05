#include<bits/stdc++.h>

#define ll long long

using namespace std;

vector< pair<ll, ll > > v(1000000);
pair<ll,ll>f;
stack<pair<ll,ll> >s;

ll x,y;

bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
	if(a.second==b.second)
	    return (a.first<b.first);

	else
	    return (a.second<b.second);
}


ll crossProduct(pair<ll,ll>a, pair<ll,ll>b,pair<ll,ll>c)
{
	pair<ll,ll>p,q;

	p.first = b.first-a.first;
	p.second= b.second-a.second;
	
	q.first=c.first-b.first;
	q.second=c.second-b.second;
	
	ll s= ((q.first*p.second)-(p.first*q.second));
	return s;
}


bool cmp1(pair<ll,ll>a,pair<ll,ll>b)
{
	ll p=crossProduct(f,a,b);
	
	if(p==0)
	{
		ll d1= (a.first-f.first)(a.first-f.first)+(a.second-f.second)(a.second-f.second);
		ll d2= (b.first-f.first)(b.first-f.first)+(b.second-f.second)(b.second-f.second);
		
		return (d1<d2);
	}
	
	if(p<0)
	    return true;
	
	else
	    return false;
}


void grahmScan(ll n){
	
	sort(v.begin(),v.begin()+n,cmp);

	f.first=v[0].first;
	f.second=v[0].second;

	sort(v.begin()+1,v.begin()+n,cmp1);
	vector<pair<ll,ll> > fin;
	fin.push_back(make_pair(v[0].first,v[0].second));
	
	for(int i=1;i<n;i++)
    {
		while(i<n-1 && crossProduct(f,v[i],v[i+1])==0)
			i++;
		
		fin.push_back(make_pair(v[i].first,v[i].second));
	}
	
	if(fin.size()<3)
	    return;
	
	s.push({fin[0].first,fin[0].second});
	s.push({fin[1].first,fin[1].second});
	s.push({fin[2].first,fin[2].second});
	
	for(int i=3;i<fin.size();i++)
    {	
		pair<ll,ll>a=s.top(); s.pop();
		pair<ll,ll>b=s.top(); s.push(a);

		while(crossProduct(b,s.top(),fin[i])>0)
		    s.pop();
		
		s.push(fin[i]);
	}
}

int main(){
	
	ll n;
	cin>>n;
    int a, b;
	for(int i=0;i<n;i++)
    {
        scanf("%d, %d",&a, &b);
        v[i].first= a;
        v[i].second= b;
		
	}

	cout<<"\n";
}