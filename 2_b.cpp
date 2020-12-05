#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n], tmp[n];
    
    for(int i=0; i<n; i++)
        scanf("%d",&array[i]);

    
    for(int i=0; i<n; i+=2)
        tmp[i]= array[i];

    if(n%2)array[0]=tmp[n-1];
    else array[0]= tmp[n-2];

    for(int i=2; i<n; i+=2)
        array[i]= tmp[i-2];

    for(int i=0; i<n; i++)
        printf("%d ",array[i]);
    printf("\n");
}