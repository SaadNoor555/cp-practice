#include<stdio.h>
#include<math.h>

#define iteration 4

double func(double x)
{
    return (x*x*x*x - 8*x*x*x - 35*x*x + 450*x - 1001);
}

double falsePos(double a, double b)
{
    double c= a;
    for(int i=0; i<iteration; i++)
    {
        c= (a*func(b)-b*func(a))/(func(b)-func(a));

        if(!func(c))
            break;

        else if(func(c)*func(a)<0)
            b=c;

        else 
            a= c;
    }

    return c;
}

int main()
{
    double a= 4.5, b=6.22, root= 5.60979, froot;
    froot= falsePos(a, b);
    printf("True Error: %lf\n", abs(froot-root));
    printf("Approximate Error: %.3lf%c\n",abs(froot-root)/100, 37);
}