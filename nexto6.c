#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n;i++)
        scanf("%d", &a[i]);
    int sum=0;
    int max=-1e9-1;
    for (int i=0; i<n; i++)
    {
        sum+=a[i];
        if (sum<0) sum=0;
        else if (sum>=0 && sum>max) max=sum;
    }
    printf("%d", max);
    return 0;
}
