#include<stdio.h>

int check(int i)
{
    int sum=0;
    for (int n=1; n<i; n++)
    {
        if (i%n==0)
        {
            sum+=n;
        }
    }
    if (sum==i)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int found=0;
    for (int i=a; i<=b; i++)
    {
        if (check(i)==1){
            printf("%d ", i);
            found =1;
        }
    }
    if (!found)
        printf("0");
    return 0;
}

