#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include<queue>
#include<set>
#include<numeric>
#include<bitset>
#include<limits>
#include<cstring>
#include<map>
#include<iomanip> 
#include<stack>

#define rep(i, n)						for(int i=0; i<n; i++)
#define Out(output)						cout<< output<< '\n'
#define Debug(x)						cout<< #x<< ": "<< x<< '\n'
#define Debug2(x, y)					cout<< #x<< ": "<< x<< '\t'<< #y<< ": "<< y<< '\n'
#define Case(case_no, ans)				cout<< "Case "<< case_no<< ": "<< ans<< '\n'
#define vint							vector<int>
#define vll								vector<ll>
#define piin							pair<int, int>
#define pll								pair<ll, ll>
#define qint							queue<int>
#define qll								queue<ll>

typedef long long						ll;
typedef unsigned long long				ull;

using namespace std;

void RUN(int cntz);

ll pow_a_b(ll a, ll b, ll mod);

template<typename T>
T GCD(T a, T b);


int main()
{
	int t=1, cnt=0;
	// cin>> t;
	while(t--)
		RUN(cnt);
}
//DRIVER FUNCTION HERE
void decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[50]; 
  
    // counter for binary array 
    int i = 0; 
    while (__builtin_popcount(n)) { 
  
        // storing remainder in binary array 
        binaryNum[i] = abs(n % 2); 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
}

void RUN(int cntz)
{
	int n;
	// cin>> n;
    int val;
    // string s;
    // cin>> s;

    // for(int i='a'; i<'z'; i++)
    //     cout<< char(i)<< ' '<< i <<'\n';

    // for(int i='A'; i<'Z'; i++)
    //     cout<< char(i)<< ' '<< i <<'\n';

    // for(int i=65; i<123; i++)
    //     if((1<<31)%i==0) cout<< i <<'\n';
    // int x=1;
    // for(int i=1; i<=8; i++)
    // {
    //     x*=31;
    //     decToBinary(x);
    //     cout<< '\n';
    // }
    // Out(x);
    string s[4];
    
    // cin>> s[0]>> s[1]>> s[2]>> s[3];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
            s[j]+='F';
    }
    cout<< s[0].length()<< '\n';
    s[1][1]= 'E', s[1][2]= 'e';
    s[2][2]= 'E', s[2][3]= 'e';
    s[3][0]= 'E', s[3][1]= 'e';
    int pow3[1001];
    pow3[0]= 1;
    for(int i=1; i<1001; i++) pow3[i]= 31*pow3[i-1];
    for(int i=0; i<4; i++)
    {
        int hash=0;
        Out(s[i]);
        rep(j, 4)
        {
            hash+=(int(s[i][j])*pow3[4-j]);
        }
        Out(hash);
           
    }
}


ll pow_a_b(ll a, ll b, ll mod)
{
	ll ans= 1;
	while(b)
	{
		if(b&1) ans= (ans*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return ans%mod;
}

template<typename T>
T GCD(T a, T b)
{
	if(!b) return a;
	return GCD(b, a%b);
}