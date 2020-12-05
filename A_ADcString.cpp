#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<string.h>
 
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

char s[51];
int it;

bool checkCor(char *st)
{
    char pat[]= "abacabacaba";
    // cout<<"hello\n";
    for(int i=0; i<11; i++)
    {
        if(strlen(st)<11) 
        {
            // cout<<"boo\n";
            return 0;
        }
        else if(st[i]!=pat[i] && st[i]!= '?')
        {
            // cout<<"boom\n";
            return 0;
        }
    }
    // cout<<"hi\n";
    return 1;
}

int checkStr(char *st)
{
    string pat= "abacaba";
    for(int i=0; i<7; i++)
    {
        if(pat[i]==st[i]);
        else return 0;
    }
    return 1;
}
 
int checkStrq(char *st)
{
    string pat= "abacaba";
    for(int i=0; i<7; i++)
    {
        if(pat[i]==st[i] || st[i]=='?')
        {
            if(st[i]=='?' && i>3)
            {
                if(checkCor(st)) 
                {
                    it+=7;
                    return 0;
                }
            }
            st[i]=pat[i];
        }
        else return 0;
    }
    return 1;
}
 
void prints(char *s,int n)
{
    for(int i=0; i<n; i++)
    {
        if(s[i]=='?') cout<<'z';
        else cout<<s[i];
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        int n, c=0;
        cin>> n>> s;
        for(int i=0; i<=n-7; i++)
            c+=checkStr(s+i);
 
        if(c==1)
        {
            cout<<"Yes\n";
            prints(s, n);
            cout<< "\n";
            continue;
        }
        else if(c>1)
        {
            cout<<"No\n";
            continue;
        }
        else
        {
            for(it=0; it<=n-7; it++)
            {
                c+=checkStrq(s+it);
                if(c)
                {
                    cout<<"Yes\n";
                    prints(s, n);
                    cout<<"\n";
                    break;
                }
            }
            if(!c) cout<<"No\n";
        }
        
    }
}