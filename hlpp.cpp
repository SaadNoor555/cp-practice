#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int T; T=1; cin >> T;
    ll tc=1;
    int cnt =0;
    while(T--)
    {
        ll N; cin >> N;
        ll sum=0, moves=0;
        ll mx = INT_MIN;
        vector<ll>pos;
        int a;
        
        cnt++;

        int zc = 0;

        for(int i=0;i<N;i++) { 
         cin >> a;
         if(a == 0) zc++;
         if(a>0) sum=sum+a;
        // cout<<"1"<<sum<<"\n";
         if(a!=0)
         pos.push_back(a);
         }
         

         if(sum == 0 && zc!=0) cout<<"Case "<<cnt<<": "<<"0 0\n";

         else if(sum==0 && zc==0){
             for(int i=0;i<pos.size();i++){
                 mx = max(mx,pos[i]);
             }
             cout<<"Case "<<cnt<<": "<<mx<<" 0"<<"\n";
             
         }
         else{
             int rp=0;
             for(int i=0;i<pos.size();i++){
                 if(pos[i]>0) {
                     rp = i;
                     break;
                 }
             }
             int k=0;
             for(int i=rp;i<pos.size()-1;i++){
                 if(pos[i]<0 && pos[i+1]>0){
                     k++;
                 }
             }
             cout<<"Case "<<cnt<<": "<<sum<<" "<<k<<"\n";

         }
    }
    }