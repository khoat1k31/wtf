#include<stdio.h>
int find(int a[], int n, int k)
{
    int position=-1;
    for (int i=0; i<n; i++)
    {
        if (a[i]==k) {
                position=i;
                break;
        }
    }
    return position;
}
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    if (find (a, n, k)) {
        printf("%d", find(a,n,k));
    }
    return 0;
}
