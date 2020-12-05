#include<stdio.h>
#include<math.h>

// #define E 2.71828
#define e 0.001
#define n 200

double f(double x)
{
    return(exp(-x)-x);
}
int main()
{
    double a,b,c,d;
    int count=1;
    printf("Enter the values of Initial Guess and Perturbation fraction:\n");
    scanf("%lf%lf",&a,&b);

    do
    {
        if(f(a)==f(b))
        {
            printf("Solution cannot be found as the values of a and b are same.\n");
            return 0;
        }

        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        count++;

        if(count==n)
            break;

    } while(fabs(f(c))>=e);

    printf("The required solution is %lf\n",c);
 
}