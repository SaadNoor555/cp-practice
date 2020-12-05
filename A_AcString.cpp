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

char s[51], temp[51];
int n;
char pat[]="abacaba";

int checkAba(char *s)
{
    int c=0;
    for(int i=0; i<=n-7; i++)
    {
        for(int j=0; j<7; j++)
        {
            if(pat[j]==s[i+j]);
            else
            {
                c--;
                break;
            }
        }
        c++;
    }
    return c;
}

bool checkQm()
{
    for(int i=0; i<=n-7; i++)
    {
        strcpy(temp, s);
        for(int j=0; j<7; j++)
        {
            if(pat[j]==temp[i+j]);
            else if(temp[i+j]=='?')
            {
                temp[i+j]=pat[j];
            }
            else break;
            if(j==6)
            {
                int cq=checkAba(temp);
                if(cq==1)
                {
                    strcpy(s, temp);
                    return 1;
                }
            }
        }
    }
    return 0;
}

void prints()
{
    for(int i=0; i<n; i++)
    {
        if(s[i]=='?') cout<<'z';
        else cout<< s[i];
    }
    cout<< "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--)
    {
        cin>> n>> s;
        int ca= checkAba(s);
        if(ca==1)
        {
            cout<< "YES\n";
            prints();
        }
        else if(ca>1)
        {
            cout<< "NO\n";
        }
        else
        {
            if(checkQm())
            {
                cout<<"YES\n";
                prints();
            }
            else cout<<"NO\n";
        }
        
    }
}