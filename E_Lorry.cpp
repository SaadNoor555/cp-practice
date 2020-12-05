#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct bot
{
    float size, pos;
    float c;
    float cpw;
    bool tkn= false;
}boat[100001];

vector<int> ord;

bool cmp(bot a, bot b)
{
    if(a.cpw!=b.cpw) return a.cpw>b.cpw;
    else return a.size<b.size;
}



int main()
{
    long long n, cap, tp, a1= 0, a2= 0;
    cin>> n>> cap;
    long long cln= cap;
    bool rvl= false;

    for(int i=0; i<n; i++)
    {
        cin>> tp>> boat[i].c;
        boat[i].cpw= boat[i].c/tp;
        boat[i].size= tp;
        boat[i].pos= i+1;
    }
    sort(boat, boat+n, cmp);
    int min= 999999, mp, ap;

    for(int i=0; i<n; i++)
    {
        // cout<<boat[i].c<<"="<<boat[i].cpw<<".\n";
        if(boat[i].size<=cap)
        {
            a1+=boat[i].c;
            cap-=boat[i].size;
            ord.push_back(boat[i].pos);
            boat[i].tkn= true;
            if(boat[i].size==1)
            {
                if(boat[i].c<min) min=boat[i].c;
                mp= boat[i].pos;
                ap= i;
                rvl= true;
            }
        } 
        if(!cap) break;
    }

    if(cap==1 && rvl)
    {
        for(int i= ap; i<n; i++)
        {
            if(!boat[i].tkn)
                if(boat[i].size==2)
                {
                    if(boat[i].c>boat[ap].c)
                    {
                        a1+= boat[i].c;
                        a1-= boat[ap].c;
                        for(auto j= ord.begin(); j!=ord.end(); j++)
                            if(*j==mp)
                            {
                                ord.erase(j);
                                break;
                            }
                        ord.push_back(boat[i].pos);
                        break;
                    }
                    else 
                        break;
                }
        }
    }
    sort(ord.rbegin(), ord.rend());
    cout<< a1<<"\n";
    for(int i= 0; i<ord.size(); i++)
    {
        cout<<ord[i];
        if(i==ord.size()-1) cout<<"\n";
        else cout<<" ";
    }

}