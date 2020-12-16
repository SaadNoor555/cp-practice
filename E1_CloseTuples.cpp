/*
                                                                       ---.   `                     
                                                                      :dmms  /dho`                  
                                                                      ymmmo  ymmh`.///`             
                                                                     .dmmm+-:mmms +mmd`             
                                                ````                 :mmmmmddmmm/ .:-.              
                                       `.-:+ossyyyyyyyso+/-.`        smmmy/+dmmm.`hhh:              
                        `-/ooooo++-.:+syyyyso+++++++++://oyyys:.     hmmm+ .dmmh :mmm-              
                      `+hhyo+++oyddhys+/::::::::::::::-`   `:oyhy/`  hmmm: :mmms smmm.              
                     .hd+/:::/shhs+/-.```-::::::::::::::----:/+oshh+`-//:  -yhh:`hmmh`              
                     yd/:::/shs/:::.     -::::::::::::::::::yy/:+ssyy.       ``  :/+-               
                     yd+/oyho/::::-     .:::::::::::::::::::ho   .syyh:                             
                  `-:ommddo:::::::-` ``-:::::////:::::::::::+d+/. `+ysd/``                          
               `/shhyyhmh/::::::::::::::::/shysshhs/:::::::::+dmd/  :++syyo:.                       
              /dho/::+dy/:::::::::::::::::yh-   `-sh+:::::::::+dds.-:::/ooyhds-                     
             /my::::+dy:::::::::::::::::::do       :ds:::::+o/::::::::::++++oydy.                   
            `hd/:::/dd/:::::::::::::::::::yd+o/`    -hs:::++/:::::::::::::/+++ohd:                  
            `dd::::smo::::::::::::::::::::/hmmmh-    -+::::::::::::::::::::::::/hd-                 
             omy+::hd/::::::::::::::::::::::ymmmy``.::::::::::::::::::sh/:::::::+my                 
              :ymddmd::::::::::::::::::::::::+sy+:::::::::::::::::::::+d+::::::::hm-                
                `.-dd:::::::::://++++++++++//::::::::::::::::::::::+shd+:::::::::sm/                
                  `dd:::::::::+++++++++++++++::::::::::::::::/+oyhdmmmm+:::::::::sm/                
                   hd::::::::+++++++++++++++o/::oo::/++osyhhhyyyhdmmmmmd/::::::::hm-                
                   yd/::::::/++++++++++++++++::ymhhhhyysoo+++++++++shmmmo:::::::+mh`                
                   +ms:::::::++++++++++++++/::/ydh++++++++++++++++++++hmo:::::::hm:                 
                   `dd::::::::/++++++++//:::::::+dy++++++++++++++++++odh:::::::ym+.:osys:`          
                   `sms::::::::::::::::::::::::::+hds+++++++++++++oshds/:::::/hdoohyo++ohy.         
                 `+hsyds::::::::::::::::::::::::::/shhhysssssyyhhhhs+/::::::odhohh+:::::/ms         
                 od:``+ds::::::::::::::::::::::::::::/++sssssso+//:::::::/ohmhyds/:::::::dh         
                 hh    /hh+:::::::::::::::::::::::::::::::::::::::::::/+shddhhs/::::::::/dy         
                 yd.    .sdy+::::::::::::::::::::::::::::::::::::::/oydhs+///::::::::::/ym/         
                 -dy.     -ohho+/:::::::::::::::::::::::::::::/+oyhhyoyh+:::::::::::::ohd/          
                  :hdo-`    .:syhyo+//::::::::::::::://++osyyhhyyo+/:::ody/:::::::::+hds-           
                   `:shys/-.`  ./dmdhhyyyyyyyyyyyyyhhhhhyyso+//::::::--.:yh/:://+oyhhs-             
                      `-/hdys/:yhy+/://+++oooo+++++++//:::::::::::::.````.shhhddhyo:.               
                         yy`-yds/::::::::::::::::::::::::::::::::::.``````.sms:-.                   
                         /hydh/::::::::::::://::::::-...........---````````.sd-                     
                          .dm/::::::::::::+ss/::::-.````````````````````````.yh.                    
                          :my:::::::::::+hd+:::::-```````````````````````````-dy                    
                          /my::::::::::smh/::::::`````````````````````````````om:                   
                          -md::::::::/hms:::::::-`````````````````````````````-do                   
                           smh+/::/+ydh+:::::::::`````````````````````````````.hh`                  
                            :sddddddms:::::::::::.`````````````````````````````sd.                  
                              `.-.`/m+::::::::::::`````````````````````````````sd.                  
                                   +d/::::::::::::-````````````````````````````sd.                
*/
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

#define FOR(iterator, in,  limit, adder) for(int iterator=in; iterator<limit; iterator+=adder)
#define rep(i, n)               for(int i=0; i<n; i++)
#define PI 						3.1415926535897932384626433832795
#define PB 						push_back
#define FR                      first
#define SC                      second
#define OutNO 					cout<<"No\n"
#define OutYES 					cout<<"Yes\n"
#define Out(n) 					cout<< n<<"\n"
#define Out2(n, k)				cout<< n<< " "<< k<< "\n";
#define Out3(n, k, p)			cout<< n<< " "<< k<< " "<< p<< "\n";
#define Debug(x)        		cout<< #x<< ": "<< x<< "\n";
#define Debug2(x, y)			cout<< #x<< ": "<< x<< "\t"<< #y<< ": "<< y<< "\n";
#define Debug3(x, y, z)			cout<< #x<< ": "<< x<< "\t"<< #y<< ": "<< y<< "\t"<< #z<<": "<< z<<"\n";
#define In(n) 					cin>> n
#define In2(a, b) 				cin>> a>> b
#define Case(n, ans) 			cout<< "Case "<< n<< ": "<< ans<< "\n"
#define vint 					vector<int>
#define vll 					vector<ll>
#define vpiin 					vector<pair<int, int>>
#define vpll					vector<pair<ll, ll>>
#define piin 					pair<int, int>
#define pll						pair<ll, ll>
#define qint 					queue<int>
#define OutVin(a)               OutVec<int>(a)
#define OutVll(a)               OutVec<ll>(a)
#define InVin(n)                InVec<int>(n)
#define InVll(n)                InVec<ll>(n)
#define InAr(a, n)              InArT<int>(a, n)
#define InArll(a, n)            InArT<ll>(a, n)
#define OutAr(a, n)             OutArT<int>(a, n)
#define OutArll(a, n)           OutArT<ll>(a, n)
#define InPin(a, n)             InPair<int>(a, n)
#define InPll(a, n)             InPair<ll>(a, n)
#define InVpiin(n)              InVPair<int>(n)
#define InVpll(n)               InVPair<ll>(n)
#define powll(n, p, mod)        power<ll>(n, p, mod);
#define powint(n, p, mod)       power<int>(n, p, mod);

typedef long int 				int32;
typedef unsigned long int 		uint32;
typedef long long int 			int64;
typedef unsigned long long int  uint64;
typedef long long 				ll;

using namespace std;

template <typename T>
void InArT(T *ar, int n)
{
    rep(i, n) In(ar[i]);
}

template <typename T>
void OutArT(T *a, int n)
{
    rep(i, n) cout<< a[i]<<" ";
    cout<<"\n";
}

template <typename T>
vector<T> InVec(int n)
{
    T tmp;
    vector<T> a;
    rep(i, n)
	{
		In(tmp);
		a.PB(tmp);
	}
	return a;
}

template <typename T>
void OutVec(vector<T> a)
{
    rep(i, a.size())
        cout<< a[i]<< " ";

    cout<< "\n";
}


template <typename T>
void InPair(pair<T, T> *a, int n)
{
    rep(i ,n)
        In2(a.FR, a.SC);
}

template <typename T>
pair<T, T> InVPair(int n)
{
    vector<pair<T, T>> a;
    T tmp1, tmp2;
    rep(i ,n)
    {
        In2(tmp1, tmp2);
        a.PB({tmp1, tmp2});
    }
    
    return a;
}

template <typename T>
T gcd(T a, T b) 
{
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

template <typename T>
// for a^b
T power(T a, T b, T mod)
{
    T ans= 1;
    while(b)
    {
        if(b&1) ans=(ans*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return ans%mod;
}

vll fac;

const ll MOD= 1000000007;
ll NCR(ll n, ll r)
{
    if(r>n) return 0; 
    ll ans= (fac[n]*power(fac[r], MOD-2, MOD))%MOD;
    ans*=power(fac[n-r], MOD-2, MOD);
    return ans%MOD;
}

void foo(int cntz)
{
    ll n, m, k;
    cin>> n>> m>> k;
    vint a;
    a= InVin(n);
    ll ans=0;
    sort(a.begin(), a.end());
    // rep(i, n) cout<< a[i]<< ' ';
    // Out("");
    for(ll i=0; i<n-m+1; i++)
    {
        ll j= upper_bound(a.begin(), a.end(), a[i]+k)-a.begin();
        // cout<< j-i<< ':'<< (NCR(j-i-1, m-1))<< '\n';
        ans+=(NCR(j-i-1, m-1));
        ans%=MOD;
    }
    // cout<< '\n';
    Out(ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fac.PB(1);
    for(int i=1; i<200005; i++)
        fac.PB((fac[i-1]*i)%MOD);
    int t=1, c=0;
    cin>> t;
    
    while(t--)
		foo(++c);
}

/* All Rights Reserved by Saad Noor*/