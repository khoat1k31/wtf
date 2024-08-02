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
    int min=1e9+1, ind;
    for (int i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            ind=i;
        }
    }
    printf("%d %d", ind, min);
    return 0;
}
