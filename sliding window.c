#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d", &a[i]);
    long long sum=0, idx=0, res=0;
    for (int i=0; i<k; i++) sum+=a[i];
    res=sum;
    for (int i=1; i<=n-k; i++)
    {
        sum=sum-a[i-1]+a[i+k-1];
        if (sum>=res) {
                res=sum;
                idx=i; }
    }
    printf("%lld\n", res);
    for (int i=0; i<k; i++) printf("%d ", a[i+idx]);
    return 0;
}
