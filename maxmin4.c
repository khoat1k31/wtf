#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max1=-1e9-1, max2=-1e9-1;
    int min1=1e9+1, min2= 1e9+1;
    for (int i=0; i<n; i++)
    {
        if(a[i]>max1) {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2) {
            max2=a[i];
        }
        if (a[i]<min1){
            min2=min1;
            min1=a[i];
        }
        else if (a[i]<min2)
            {min2=a[i];}
    }
    long long s1=max1*max2, s2=min1*min2 ;
    if (s1>=s2) printf("%lld", s1);
    else printf("%lld", s2);
    return 0;
}
