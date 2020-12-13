#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t, cs=0;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        cs++;
        bitset<30> ac;
        char s[100005];
        scanf("%s", s);
        int n=strlen(s);
        for(int i=0; i<n; i++)
            ac[s[i]-'a']=1;
        char ter=s[0], att=s[0];
        bool flag=0;
        for(int i=0; i<n; i++)
        {
            ac[s[i]-'a']= 0;
            for(int j=0; j<s[i]-'a'; j++)
                if(ac[j]) 
                {
                    att= (j+'a');
                    ter= s[i];
                    flag=1;
                    break;
                }
            if(flag) break;
        }
        // queue <int>qq;
        // qq.f

        for(int i=0; i<n; i++)
        {
            if(s[i]==att) printf("%c", ter);
            else if(s[i]==ter) printf("%c", att);
            else printf("%c", s[i]);
        }
        printf("\n");
    }
}