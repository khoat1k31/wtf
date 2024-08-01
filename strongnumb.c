#include<stdio.h>

int gt(int n)
{
    int tich=1;
    for (int i=1; i<=n; i++)
    {
        tich*=i;
    }
    return tich;
}
int strong(int n)
{
    int org = n;
    int sum = 0;
    while (n>0){
        int di=n%10;
        sum = sum + gt(di);
        n/=10;
    }
    return sum==org;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int found=0;
    for(int i=a; i<=b; i++)
    {
        if (strong(i))
        {
            printf("%d ", i);
            found =1;
        }
    }
    if (found=0)
    {
        printf("0");
    }

    return 0;

}
