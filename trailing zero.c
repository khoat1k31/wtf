#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s=0;
    for (int i=5; n/i>=1; i*=5)
    {
        s = s+n/i;
    }
    printf("%d", s);
    return 0;
}
