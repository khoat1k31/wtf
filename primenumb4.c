#include<stdio.h>
int check1(int n)
{
    if (n==1) {return 0;}
    if(n==2) return 1;
    if(n%2==0) return 0;
    for (int i=3; i*i<=n; i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int j=2; j<n; j++)
    {
        if (check1(j))
        {
            printf("%d ", j);
        }
    }
    return 0;
}
