#include<stdio.h>
void pro(int n)
{
    long long tich=1;
    while(n>0)
    {
        tich*=(n%10);
        n=n/10;
    }
    printf("%lld", tich);
}
int main()
{
    int n;
    scanf("%d", &n);
    pro(n);
    return 0;
}
