//tempplate written by saad
//code by me


#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>

#define ELIF else if
#define FOR(iterator , limit , adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back

typedef long int LI;
typedef unsigned long int ULI;
typedef long long int LLI;
typedef unsigned long long int  ULLI;
typedef long long LL;

using namespace std;

bool cmpfunc(const string a, const string b)
{
    return (a.size() < b.size()); 
}

bool isSuffix(string s1, string s2) 
{ 
    int n1 = s1.length(), n2 = s2.length(); 
    if (n1 > n2) 
      return false; 
    for (int i=0; i<n1; i++) 
       if (s1[n1 - i - 1] != s2[n2 - i - 1]) 
           return false; 
    return true; 
} 

bool isPrefix(string s1, string s2) 
{ 
    int n1 = s1.length(), n2 = s2.length(); 
    if (n1 > n2) 
      return false; 

    for (int i=0; i<n1; i++) 
       if (s1[i] != s2[i]) 
           return false; 
    return true; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;

    FOR(x, t, 1)
    {
        int n;
        cin>> n;

        string ex;
        vector<string> patL, patR, patM;
        bool ans= true;

        int size[n];

        FOR(i , n , 1)
        {
            int s= 0;
            bool sc= false;
            cin>>ex;
            char temp[102];
            FOR(j, ex.size(), 1)
            {
                if(ex[j]!='*') temp[s++]=ex[j];
                if(ex[j]=='*'|| j==ex.size()-1)
                {

                    
                    temp[s++]= '\0';
                    if(sc) patR.PB(temp);
                    else
                    {
                        sc= 1;
                        patL.PB(temp);
                    }
                    s=0;

                }
            }
        }

        sort(patR.begin(), patR.end(), cmpfunc);
        sort(patL.begin(), patL.end(), cmpfunc);

        FOR(i, patL.size()-1, 1)
        {
            if(!isPrefix(patL[i], patL[i+1]))
            {
                ans= false;
                break;
            }
        }
        FOR(i, patR.size()-1, 1)
        {
            if(!ans || !isSuffix(patR[i], patR[i+1]))
            {
                ans= false;
                break;
            }
        }
        cout<<"Case #"<<x+1<<": ";
        if(ans) cout<<*(patL.end()-1)<<*(patR.end()-1)<<endl;
        else cout<<"*"<<endl;
    }
}