#include<stdio.h>

int main()
{
    int n, sum=0;
    scanf("%d",&n);

    do
    {
        if(!n) break;
        n--;
        if(n==3)
            continue;

        sum+=n;
    } while(n);
    

    printf("Sum: %d\n", sum);
    return 0;
}