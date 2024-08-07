#include<stdio.h>
void chen(int a[], int n, int x, int pos)
{
    for (int i=n; i>pos; i--)
        a[i]=a[i-1];
    a[pos]=x;
}
int main()
{
    int n; scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int x, pos;
    scanf("%d %d", &x, &pos);
    chen (a,n,x, pos);
    n++;
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}
