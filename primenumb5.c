#include<stdio.h>
int check1(int n)
{
    if(n==1) return 0;
    for (int i=2; i*i<=n; i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}
int primefactor(int n)
{
    for (int i=2; i*i<=n; i++)
    {
        if(check1(i))
        {
            if(n%i==0)
            {
                printf("%d ", i);
                while (n%i==0)
                {
                    n=n/i;
                }
            }
        }
    }
    if(n>1){
        printf("%d", n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    primefactor(n);
    return 0;
}
