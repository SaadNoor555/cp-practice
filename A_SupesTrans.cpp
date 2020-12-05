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

using namespace std;

bool CheckVowel(char c)
{
    if(c=='a'|| c== 'e'|| c=='i'|| c=='o'|| c=='u') return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin>> s>> t;
    int a= s.length();
    int b= t.length();
    
    if(a!=b)
    {
        cout<< "No\n";
        return 0;
    }
    FOR(i, a, 1)
    {
        if((CheckVowel(s[i])&&!CheckVowel(t[i])) || (CheckVowel(t[i])&&!CheckVowel(s[i])))
        {
            cout<< "No\n";
            return 0;
        }
    }
    cout<< "Yes\n";
    return 0;

}