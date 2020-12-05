    #include<bits/stdc++.h>
    #include<vector>
    #include<deque>
    #include<algorithm>
    #include<string>
    #include<stdio.h>
     
     
    #define ELIF else if
    #define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
    #define PI 3.1415926535897932384626433832795
    #define PB push_back
     
    typedef long int int32;
    typedef unsigned long int uint32;
    typedef long long int int64;
    typedef unsigned long long int  uint64;
    using namespace std;
     
     
    int main()
    {
        memset(cnt,0,sizeof(cnt));
        int t;
        cin>>t;
        while(t--){
            int n,k;
            cin>>n>>k;
            int a[n];
            int d=0;
            vector<int>p;
            set<int>s;
     
            
            for(int i=0;i<n;i++)
           {
     
            	cin>>a[i];
           		s.insert(a[i]);
           }
           int m=0;
            if(s.size()>k)
            {
                cout<<"-1"<<"\n";
                continue;
            }
            
     
            
            else{
                
                    for(int j=0;j<n;j++){
                    for(int i=1;i<=k;i++)
                    {
                       
                        p.push_back(i);
                    }
                    
     
                }
     
                cout<<p.size()<<"\n";
                for(int i=0;i<p.size();i++)
                cout<<p[i]<<" ";
            }
            cout<<"\n";
     
     
     
     
        }
    }
