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

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back
#define OutNO cout<<"NO\n"
#define OutYES cout<<"YES\n"
#define Out(n) cout<< n<<"\n"
#define vint vector<int>
#define vll vector<ll>
#define piin pair<int, int>
#define RED 1
#define BLACK 2


typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

using namespace std;

void InAr(int *ar, int n)
{
  FOR(i, n, 1) cin>> ar[i];
}

void OutAr(ll *a, int n)
{
  FOR(i, n, 1) cout<< a[i]<<" ";
  cout<<"\n";
}

void OutVin(vint a)
{
    FOR(i, a.size(), 1)
        cout<< a[i]<< " ";

    cout<< "\n";
}

void OutVll(vll a)
{
    FOR(i, a.size(), 1)
        cout<< a[i]<< " ";

    cout<< "\n";
}

void MEMSET(ll *a, int n, int v)
{
	FOR(i, n, 1)
		a[i]= v;
}

int gcd(int a, int b) 
{
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    // t=1;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n];
        InAr(a, n);
        bool f1[n+1]={false}, f2[n+1]={false}, an1= true, an2= true;
        int i, k;
        for(i=0; i<n; i++)
        {
            if(!f1[a[i]])
                f1[a[i]]= true;
            else break;
        }
        for(int j=1; j<=i; j++)
            if(!f1[j]) 
            {
                an1= false;
                break;
            }

        if(an1)for(int j=i; j<n; j++)
            f2[a[j]]= true;

        if(an1)for(int j=1; j<=n-i; j++)
            if(!f2[j])
            {
                an1= false;
                break;
            }
        FOR(i, n+1, 1) f1[i]=0, f2[i]=0;

        for(k=n-1; k>=0; k--)
        {
            if(!f2[a[k]])
                f2[a[k]]= true;
            else break;
        }
        k++;
        // if(k<=n-i) an2= false;
        for(int j=1; j<=n-k; j++)
        {
            if(!f2[j]) 
            {
                // cout<<".";
                an2= false;
                break;
            }
        }
        if(an2)for(int j=0; j<k; j++)
            f1[a[j]]= true;

        if(an2)for(int j=1; j<=k; j++)
            if(!f1[j])
            {
                // cout<< ".";
                an2= false;
                break;
            }
        if(an1 && k==i) an2= false;
        cout<< (int)an1+(int)an2<<"\n";
        if(an1) cout<< i<< " "<< n-i<< "\n";
        if(an2) cout<< k<< " "<< n-k<< "\n";
    }
}