#include<stdio.h>
int main()
{
    int k,n,w;
    scanf("%d%d%d", &k, &n, &w);
    int total=(k*(w+1)*w+1)/2 - n;
    if (total>0)
    {
        printf("%d", total);
    }
    else printf("0");
    return 0;
}
