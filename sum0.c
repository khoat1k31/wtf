#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    int even=0, odd=0;
    while (n>0)
    {
    if((n%10)%2==0)
    {
        even=even + (n%10);
    }
    else odd=odd+(n%10);
    n=n/10;
    }
    printf("%d %d", even, odd);
    return 0;
}
