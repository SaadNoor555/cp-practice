#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include<queue>
#include<cstring>

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back
#define MAX 100001

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

using namespace std;

bool check(int *a)
{
    if(a[8]>0 || a[4]>1 || (a[4]>0 && a[2]>2) || (a[6]>0 && a[2]>1))
        return true;

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, flag= 0, tem, maxm= 0;
    char c;
    cin>> n;
    int qt[MAX];
    int fqt[MAX];
    memset(qt, 0, MAX);
    memset(fqt, 0, MAX);
    vector<int> sqr;
    vector<int> rec;
    FOR(i, n, 1)
    {
        cin>> tem;
        qt[tem]++;
        fqt[qt[tem]]++;
        maxm= max(maxm, tem);
    }
    int q;
    cin>> q;
    while (q--)
    {
        cin>> c>> tem;
        if(c=='+')
        {
            qt[tem]++;
            fqt[qt[tem]]++;
        }
        else
        {
            fqt[qt[tem]]--;
            qt[tem]--;
        }
        if(check(fqt)) cout<< "YES\n";
        else cout<< "NO\n";
        
    }
    
}