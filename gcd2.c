#include<stdio.h>
int gcd(int a, int b)
{
    while (b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int result=a[0];
    for (int i=1; i<n; i++)
    {
        result = gcd(result, a[i]);
            if (result==1) break;
    }
    int min=-1;
    for (int i=2; i*i<=result; i++) {
        if (result%i==0)
        {
            min=i;
            break;
        }
    }
    if (min==-1 && result >1) min=result;
    printf("%d", min);
    return 0;
}
