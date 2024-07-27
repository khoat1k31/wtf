#include<stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    for (int i=1; i<=k; i++)
    {
        long long s=i*i*(i*i-1)/2;
        long long h=4*(i-1)*(i-2);
        long long total=s-h;
        printf("%lld\n", total);
    }
    return 0;
}
