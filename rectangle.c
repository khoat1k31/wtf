#include<stdio.h>
int main()
{
    unsigned int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int a=sqrt(x*z/y);
    int b=sqrt(x*y/z);
    int c=sqrt(y*z/x);
    int d=4*(a+b+c);
    printf("%d", d);
    return 0;
}
