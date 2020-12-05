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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s0, s1, r0, r1;
    // cin>> t;
    // t=1;
    cin>> s0>> s1>> r0>> r1;
    while(s0 && s1 && r0 && r1)
    {
        int p1, p2;
        int win= 0;
        if(s0<s1) swap(s0, s1);
        if(r0<r1) swap(r0, r1);
        if(s0==2 && s1==1)
        {
            if(r0!=2 || r1!=1) win=1;
        }
        else if(r0==2 && r1==1)
        {
            if(s0!=2 || s1!=1) win=2;
        }
        else if(s0==s1)
        {
            if(r0!=r1) win=1;
            else
            {
                if(s0>r0) win=1;
                else if(r0>s0)win= 2;
            }
        }
        else if(r0==r1)
        {
            if(s0!=s1) win=2;
        }
        else
        {
            if(s0>r0) win=1;
            else if(r0>s0) win=2;
            else if(s1>r1) win=1;
            else if(r1>s1) win=2;
        }
        if(win==1) cout<< "Player 1 wins.\n";
        else if(win==2) cout<< "Player 2 wins.\n";
        else cout<< "Tie.\n";
        cin>> s0>> s1>> r0>> r1;
    }
}