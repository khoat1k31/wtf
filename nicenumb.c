#include<stdio.h>
int check1(int n)
{
    while (n>0)
    {
        if (n%10 == 6)
        {
            return 1;
        }
        n=n/10;
    }
    return 0;
}
int check2(int n)
{
    int sum=0;
    while (n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    if(sum%10==8)
    {
        return 1;
    }
    return 0;
}
int check3(int n)
{
    int org=n;
    int rev=0;
    while (n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev==org;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int t=0;
    for (int i=a; i<=b; i++)
    {
        if (check1(i) && check2(i) && check3(i))
        {
            t++;
        }
    }
    printf("%d", t);
    return 0;
}
