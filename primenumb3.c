#include<stdio.h>
int check(int n)
{
    for (int i=2; i*i<=n; i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i=a; i<=b; i++)
    {
        if (check(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
