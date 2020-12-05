#include<iostream>
#include<vector>
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
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        vector<int> ord;

        int a[n];
        int ex[n+1];
        
        FOR(i, n+1, 1)
            ex[i]= 0;

        FOR(i, n, 1)
        {
            cin>> a[i];
            ex[a[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[j]== i)
                {
                    // cout<<a[j]<<","<< j<<". ";
                    for(int k=i+1; k<=n; k++)
                    {
                        if(!ex[k])
                        {
                            ex[k]++;
                            a[j]= k;
                            break;
                        }
                    }
                    ord.push_back(j);
                    // cout<< j<< " ";
                    for(int p=0; p<n; p++)
                        cout<<a[p]<<" ";
                    
                    cout<<".\n";
                }

            }
            if(a[i]!=i) ord.push_back(i);
            ex[a[i]]--;
            
            
            // cout<<i<< " ";
            
            if(a[i]!=i)for(int p=0; p<n; p++)
                cout<<a[p]<<" ";
                
            a[i]= i;
                    
            cout<<".\n";
            

        }
        int s= ord.size();
        cout<< s<<"\n";
        FOR(i, s, 1)
            cout<< ord[i]+1<< " ";

        cout<< "\n";
        
        
    }
}