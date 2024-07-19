#include<stdio.h>
int main()
{
    double a,b,c,x1, x2, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b*b-4*a*c;
    if (delta<0)
        printf("NO");
    else if(delta ==0)
        {
        x1 = x2 = -b/(2*a);
        printf("%.2lf", x1);
        }
    else if(delta > 0)
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("%.2lf %.2lf", x1, x2);
    }
    return 0;
}
