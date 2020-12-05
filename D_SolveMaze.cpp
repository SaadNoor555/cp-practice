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

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back
#define OutNO cout<<"NO\n"
#define OutYES cout<<"YES\n"
#define Out(n) cout<< n<<"\n"
#define vint vector<int>
#define vll vector<ll>
#define RED 1
#define BLACK 2


typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

using namespace std;

void InAr(ll *ar, int n)
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

void MEMSET(ll *a, int n, int v)
{
	FOR(i, n, 1)
		a[i]= v;
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
        int n, m;
        cin>> n>> m;
        bool an= true;
        string s[n];
        FOR(i, n, 1) cin>> s[i];
// Blocking all the B's
        FOR(i, n, 1)
        {
            FOR(j, m, 1)
            {
                if(s[i][j]=='B')
                {
                    if(i+1<n && s[i+1][j]=='.') s[i+1][j]= '#';
                    else if(i+1<n && s[i+1][j]=='G')
                    {
                        an= false;
                        break;
                    }
                    if(j+1<m && s[i][j+1]=='.') s[i][j+1]= '#';
                    else if(j+1<m && s[i][j+1]=='G')
                    {
                        an= false;
                        break;
                    }
                    if(i-1>=0 && s[i-1][j]=='.') s[i-1][j]= '#';
                    else if(i-1>=0 && s[i-1][j]=='G')
                    {
                        an= false;
                        break;
                    }
                    if(j-1>=0 && s[i][j-1]=='.') s[i][j-1]= '#';
                    else if(j-1>=0 && s[i][j-1]=='G')
                    {
                        an= false;
                        break;
                    }
                }
            }
            if(!an) break;
        }
// BFS to see escapable zones
        if(an)
        {
            // cout<<",";
            queue<pair<int, int>> v;
            if(s[n-1][m-1]=='.')v.push({n-1, m-1});
            while(!v.empty())
            {
                pair<int, int> p= v.front();
                // cout<< p.first<< " "<< p.second<< "\n";
                if(p.first-1>=0 && (s[p.first-1][p.second]=='.' || s[p.first-1][p.second]=='G'))
                {
                    v.push({p.first-1, p.second});
                    s[p.first-1][p.second]= 'F';
                }
                if(p.second-1>=0 && (s[p.first][p.second-1]=='.' || s[p.first][p.second-1]=='G'))
                {
                    v.push({p.first, p.second-1});
                    s[p.first][p.second-1]= 'F';
                }
                if(p.first+1<n && (s[p.first+1][p.second]=='.' || s[p.first+1][p.second]=='G'))
                {
                    v.push({p.first+1, p.second});
                    s[p.first+1][p.second]= 'F';
                }
                if(p.second+1<m && (s[p.first][p.second+1]=='.' || s[p.first][p.second+1]=='G'))
                {
                    v.push({p.first, p.second+1});
                    s[p.first][p.second+1]= 'F';
                }
                v.pop();
            }

            FOR(i, n, 1)
            {
                FOR(j, m, 1)
                    if(s[i][j]=='G')
                    {
                        an= false;
                        break;
                    }

                if(!an) break;
            }
        }

        if(an) OutYES;
        else OutNO;

    }
}