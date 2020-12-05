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

short checkDay(string day)
{
    if(day=="sunday") return 1;
    ELIF(day=="monday") return 2;
    ELIF(day=="tuesday") return 3;
    ELIF(day=="wednesday") return 4;
    ELIF(day== "thursday") return 5;
    ELIF(day=="friday") return 6;
    else return 7;
}

bool check(short d1, short d2)
{
    if(d1==d2) return true;
    ELIF((d2-d1)==2||(d2-d1)==3) return true;
    ELIF(d1>d2)
        if((d2-d1+7)==2||(d2-d1+7)==3) return true;
        
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string day1, day2;
    cin>> day1>> day2;

    short d1= checkDay(day1),  d2= checkDay(day2);
    if(check(d1, d2)) cout<<"YES\n";
    else cout<<"NO\n";

} 