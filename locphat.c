#include<stdio.h>

int check1(int n)
{
    while(n>0)
    {
        if (n%10 !=6 || n%10!=8 || n%10!=0)
        {
            return 0;
        }
        n=n/10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int kq;
    if (kq==check1(n)){
        printf("1");
    }
    else printf("0");
    return 0;
}
