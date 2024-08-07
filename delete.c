#include<stdio.h>
void xoa(int a[], int n, int pos)
{
    for (int i=pos; i<n; i++)
        a[i]=a[i+1];
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int pos;
    scanf("%d", &pos);
    xoa(a, n, pos);
    n--;
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}
