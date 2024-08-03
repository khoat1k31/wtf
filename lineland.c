#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d", &a[i]);
    int min=0, max=0;
    for (int i=0; i<n; i++)
    {
        if (i==0) {min=(a[1]-a[0]) ; max=a[n-1]-a[0];}
        else if(i==n-1) {min=a[n-1]-a[n-2]; max=a[n-1]-a[0];}
        else {
            int min1=a[i]-a[i-1], min2=a[i+1]-a[i], max1=a[i]-a[0], max2=a[n-1]-a[i];
            if (min1>min2)
            {
                min=min2;
            }
            else min=min1;
            if (max1>max2)
                max=max1;
            else max=max2;
        }
        printf("%d %d\n", min, max);
    }
    return 0;
}
