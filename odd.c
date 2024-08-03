#include<stdio.h>
int check(int n)
{
    if(n%2==1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (check(a[i]))
            printf("%d ", a[i]);
    }
    return 0;
}
