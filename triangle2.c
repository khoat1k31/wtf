#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if (a<=0 || b<=0 ||c<=0)
        printf("INVALID");
    else if (a+b<=c || b+c<=a || c+a<=b)
        printf("INVALID");
    else if (a==b && b==c)
        printf("1");
    else if (a==b || b==c || c==a)
        printf("2");
    else if ((a*a+b*b==c*c) || (a*a+c*c==b*b)|| (b*b+c*c==a*a))
        printf("3");
    else printf("4");
    return 0;
}
