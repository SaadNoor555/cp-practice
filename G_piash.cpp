#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    long long int m,s,t,i,u;
    cin>>m>>s;
    t=s;
    long long int a[m];
    long long int b[m];
    if(s==0 && m==1)
      printf("0 0");
    else if(s==0)
        printf("-1 -1");
    else if(m*9<s)
        printf("-1 -1");
    else
    {
        if(m==1)
        {
            printf("%lld %lld",s,s);
        }
        else if(s<=9)
        {
            for(i=0;i<m;i++)
            {
                if(i!=m-1 && t>0)
                {
                    printf("1");
                    t--;
                }
                else
                    printf("%lld",t);
            }
            printf(" ");
            printf("%lld",s);
            for(i=0;i<m-1;i++)
            {
                printf("0");
            }
        }
        else
        {
            u=s;
            for(i=m-1;i>=0;i--)
            {
                if(u>9)
                {
                    a[i]=9;
                    u=u-9;
                }
                else if(u!=1 && i!=0)
                {
                    a[i]=u-1;
                    u=1;
                }
                else if(u==1 && i!=0)
                {
                    a[i]=0;
                }
                else
                {
                    a[i]=u;
                }
            }
            u=s;
            for(i=0;i<m;i++)
            {
                if(u>=9)
                {
                    b[i]=9;
                    u=u-9;
                }
                else if(u!=0)
                {
                    b[i]=u;
                    u=0;
                }
                else
                    b[i]=0;
            }
            for(i=0;i<m;i++)
                printf("%lld",a[i]);
            printf(" ");
            for(i=0;i<m;i++)
                printf("%lld",b[i]);
        }
    }
}