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

#define ELIF else if
#define FOR(iterator, limit, adder) for(int iterator=0; iterator<limit; iterator+=adder)
#define PI 3.1415926535897932384626433832795
#define PB push_back
#define OutNO cout<<"NO\n"
#define OutYES cout<<"YES\n"
#define Out(n) cout<< n<<"\n"
#define vint vector<int>
#define vll vector<ll>
#define vpiin vector<pair<int, int>>
#define piin pair<int, int>
#define qint queue<int>
#define RED 1
#define BLACK 2


typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;

using namespace std;

void InArll(ll *ar, int n)
{
  FOR(i, n, 1) cin>> ar[i];
}

void OutArll(ll *a, int n)
{
  FOR(i, n, 1) cout<< a[i]<<" ";
  cout<<"\n";
}

void InAr(int *ar, int n)
{
  FOR(i, n, 1) cin>> ar[i];
}

void OutAr(int *a, int n)
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

vint Dijkstra(int source, int n, vector<vpiin> graph)
{
    vint cost(n, 99999);
	cost[source]= 0;
	vector<vint> ans(n);
    int active;
    priority_queue<piin, vpiin,greater<piin>> pq;
    pq.push({0, source});
	bitset<100001> visited;
	// cout<<pq.size()<<"\n";
	// FOR(i, n, 1) cout<< graph[i].size()<< " ";
	// cout<< "\n";
    while(!pq.empty())
    {
        active= pq.top().second;
        pq.pop();
		if(visited[active]) continue;
		visited[active]= 1;
		// cout<< active<< " "<< cost[active]<<"\n";
        FOR(i, graph[active].size(), 1)
        {
			piin buf= graph[active][i];
            if(cost[buf.second]>buf.first+cost[active])
            {
                cost[buf.second]= buf.first+cost[active];
				ans[buf.second]= ans[active];
				ans[buf.second].PB(active);
                pq.push({cost[buf.second], buf.second});
            }
        }
		// cout<<"hi\n";
    }
	return cost;
}

ll count(ll *a, int n, ll v)
{
	ll c=0;
	FOR(i, n, 1)
		if(a[i]>=v) c++;

	return c;
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

int charval(char c)
{
    if(c=='A') return 8;
    if(c=='B') return 7;
    if(c=='C') return 6;
    if(c=='D') return 5;
    if(c=='E') return 4;
    if(c=='F') return 3;
    if(c=='G') return 2;
    if(c=='H') return 1;
    return 0;
}

char intchar(int c)
{
    if(c==8) return 'A';
    if(c==7) return 'B';
    if(c==6) return 'C';
    if(c==5) return 'D';
    if(c==4) return 'E';
    if(c==3) return 'F';
    if(c==2) return 'G';
    if(c==1) return 'H';
    return 'x';
}

bool brd[9][9];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1; i<9; i++)
        for(int j=i%2; j<9; j+=2)
            brd[i][j]= 1;

    // FOR(i, 9, 1)
    // {
    //     FOR(j, 9, 1)
    //         cout<< brd[i][j];
    //     cout<< "\n";
    // }
    
    int t;
    cin>> t;
    // t=1;
    while(t--)
    {
        int x1, y1, x2, y2, any;
        char c1, c2, anx;
        bool fa=false;
        cin>> c1>> y1>> c2>> y2;
        x1= charval(c1);
        x2= charval(c2);

        if(brd[x1][y1]!=brd[x2][y2]) cout<< "Impossible\n";
        else
        {
            int tbl[9][9];
            FOR(i, 9, 1)
                FOR(j, 9, 1)
                    tbl[i][j]=0;

            int p, q;
            for(p=x1, q=y1; p<9 && q>0; p++, q--)
                tbl[p][q]=1;

            for(p=x1, q=y1; p>0 && q>0; p--, q--)
                tbl[p][q]=1;

            for(p=x1, q=y1; p>0 && q<9; p--, q++)
                tbl[p][q]= 1;

            for(p=x1, q=y1; p<9 && q<9; p++, q++)
                tbl[p][q]= 1;

            for(p=x2, q=y2; p<9 && q>0; p++, q--)
                if(tbl[p][q]==1)
                {
                    fa=true;
                    anx=intchar(p);
                    any=q;
                }

            if(!fa)for(p=x2, q=y2; p>0 && q>0; p--, q--)
                if(tbl[p][q]==1)
                {
                    fa=true;
                    anx=intchar(p);
                    any=q;
                }

            if(!fa)for(p=x2, q=y2; p>0 && q<9; p--, q++)
                if(tbl[p][q]==1)
                {
                    fa=true;
                    anx=intchar(p);
                    any=q;
                }

            if(!fa)for(p=x2, q=y2; p<9 && q<9; p++, q++)
                if(tbl[p][q]==1)
                {
                    fa=true;
                    anx=intchar(p);
                    any=q;
                }
            cout<<2<<" "<< c1<< " "<< y1<< " "<< anx<< " "<< any<< " "<< c2<< " "<< y2<< "\n";
                // FOR(i, 9, 1)
                // {
                //     FOR(j, 9, 1)
                //         cout<< tbl[i][j];
                //     cout<< "\n";
                // }
        }
    }
}