#include<stdio.h>

void check(int a[], int n, int x)
{
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++)
        {
            if (a[i]+a[j]==x) printf("%d %d\n", a[i], a[j]);
        }
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d", &a[i]);
    int x;
    scanf("%d", &x);
    check(a,n,x);
    return 0;
}
