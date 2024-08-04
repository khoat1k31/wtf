#include<stdio.h>
int gcd(int a, int b)
{
    while (b!=0)
    {
        int t=b;
        b=a%b;
        a=t;
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
    int count =0;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (gcd(a[i], a[j])==1)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}
