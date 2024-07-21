#include<stdio.h>
int main()
{
    int a,b,k;
    scanf("%d%d%D", &a, &b, &k);
    if (k%2==0)
    {
        int s=(k/2)*a-(k/2)*b;
        printf("%d", s);
    }
    else if (k%2!=0)
    {
        int s=(k/2 + 1)*a-(k/2)*b;
        printf("%d", s);
    }
    return 0;
}
