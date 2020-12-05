#include<bits/stdc++.h>
//proma
using namespace std;
typedef struct mo{
    long long a= 0;
    long long b= 0;
    long long c= 0;
}monster;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--)
    {
        long long n;
        cin>>n;
        monster m[n];
        long long count1=0;
        for(int i=0;i<n;i++)
        {
            cin>>m[i].a;
            cin>>m[i].b;
            if(i)m[i].c= m[i].a-m[i-1].b;
            if(m[i].c<0) m[i].c=0;
            count1+=m[i].c;
        }
        m[0].c= m[0].a-m[n-1].b;
        if(m[0].c<0) m[0].c= 0;
        count1+=m[0].c;

    // cout<<count1<<endl;
        long long temp1=0;
        long long count2=9999999999999;

        for(int i=0;i<n;i++)
        {
            temp1=m[i].a-m[i].c;
            count2= min(count2,temp1);
            if(count2>temp1){
                count2=temp1;
            }
            temp1=0;
        }
        cout<<count2+count1<<endl;
    }
    //baaolsujasfddiohas
}