#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    int min=(n+1)/2;
    if (min%m==0)
        printf("%d", min);
    else if(min%m!=0)
    {
        int kq=((min+m)/m)*m;
        if (kq<=n)
        {
            printf("%d", kq);
        }
        else printf("-1");
    }
    return 0;
}
