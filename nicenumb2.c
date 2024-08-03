#include<stdio.h>
int check1(int n)
{
    while (n>0)
    {
        if(n%10==1)
            return 1;
        n/=10;
    }
    return 0;
}
int check2(int n)
{
    while (n>0)
    {
        if (n%10==9)
           return 1;
        n/=10;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int found=0;
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++)
    {
        if(check1(a[i]) &&  check2(a[i]))
        {
            printf("%d ", a[i]);
            found=1;
        }
    }
    if(!found) printf("-1");

    return 0;
}
