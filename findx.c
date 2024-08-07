#include<stdio.h>
int find(int a[], int n, int x)
{
    int pos=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]==x) {
            pos=i+1;
            break;
        }
    }
    return pos;
}
int main()
{
    int n; scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    scanf("%d", &a[i]);
    int x;
    scanf("%d", &x);
    int result=find(a,n,x);
    printf("%d", result);
    return 0;
}
