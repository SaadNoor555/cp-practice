#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll aa, bb, res, i;
char a[100005],b[100005];
int sum[200];
int main()
{
    scanf("%s",a);
    scanf("%s",b);
    aa = strlen(a);
    bb = strlen(b);
    memset(sum,0,sizeof(sum));
    res = aa * bb;
    for(i = 1; i < aa ; i++)
        ++sum[a[i]];
    for(i = 0 ; i < bb - 1; i++)
        res -= sum[b[i]];
    printf("%lld\n",res);
    return 0;
}