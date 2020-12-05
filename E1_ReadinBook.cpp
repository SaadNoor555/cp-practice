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

struct book
{
    int t;
    bool a, b;
    bool tak= false;
};

bool cmpfunc(book a, book b)
{
    return a.t<b.t;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, ans= 0;
    cin>> n>> k;
    
    int ka= k, kb= k, time, i1= 0, i2= 0, i3= 0;
    bool a, b;
    book g1[n], g2[n], g3[n];

    FOR(i, n, 1)
    {
        cin>> time>> a>> b;
        if(a && b)
        {
            g1[i1].t= time, g1[i1].a= 1, g1[i1].b= 1;
            i1++;
        }
        else if(a)
        {
            g2[i2].t= time, g2[i2].a= 1, g2[i2].b= 0;
            i2++;
        }
        else if(b)
        {
            g3[i3].t= time, g3[i3].a= 0, g3[i3].b= 1;
            i3++;
        }
        
    }


    sort(g1, g1+i1, cmpfunc);
    sort(g2, g2+i2, cmpfunc);
    sort(g3, g3+i3, cmpfunc);
    
    if((i1+i2)<k || (i1+i3)<k) ans= -1;

    if(ans!=-1)
    {
        int i=0, j=0, k=0;
        while(ka || kb)
        {
            if(i<i1 && j<i2 && k<i3)
            {
                if(g1[i].t<=g2[j].t+g3[k].t)
                {
                    ans+=g1[i].t;
                    i++;
                }
                else
                {
                    ans+=(g2[j].t+g3[k].t);
                    j++, k++;
                }
                ka--, kb--;
            }
            else if(i>=i1 && j<i2 && k<i3)
            {
                ans+=(g2[j].t+g3[k].t);
                j++, k++;
                ka--, kb--;
            }
            else if(j>=i2 || k>=i3)
            {
                ans+=g1[i].t;
                i++;
                ka--, kb--;
            }
        }

    }

    if(ka || kb) ans= -1;
    cout<< ans<< "\n";
}