#include<stdio.h>
void check(int n)
{
    for (int i=1; i<=n; i++)
    {
        if(n%i==0)
            printf("%d ", i);
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    check(n);
    return 0;
}
