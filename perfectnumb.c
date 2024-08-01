#include<stdio.h>
int check(int n)
{
    int sum=0;
    for (int i=1; i<=n/2; i++)
    {
        if(n%i==0)
            sum+=i;
    }
    return sum==n;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int k=a; k<=b; k++)
    {
        if (check(k))
            printf("%d ", k);
    }
    return 0;
}
