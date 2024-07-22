#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d %d", &n, &s);
    if (s%n==0)
    {
    int total= (s/n);
    printf("%d", total);
    }
    else if(s%n!=0)
    {
        int total=(s/n)+1;
        printf("%d", total);
    }


    return 0;
}
