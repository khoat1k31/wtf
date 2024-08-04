#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){scanf("%d", &a[i]);}
    long long max1=LLONG_MIN, max2=LLONG_MIN, max3=LLONG_MIN;
    long long min1=LLONG_MAX, min2=LLONG_MAX;
    for (int i=0; i<n; i++){
        if(a[i]>max1) {
            max3=max2;
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2) {
            max3=max2;
            max2=a[i];
        }
        else if(a[i]>max3)
            max3=a[i];
        if (a[i]<min1){
            min2=min1;
            min1=a[i];
        }
        else if (a[i]<min2)
            min2=a[i];
    }
    long long prd1=max1*max2*max3;
    long long prd2=min1*min2*max1;
    long long result=(prd1 > prd2) ? prd1 : prd2;
    printf("%lld", result);
    return 0;
}
