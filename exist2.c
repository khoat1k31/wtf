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
    int max=1, current=1;
    int m=a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]==a[i-1]) {
            current++;
        }
        else {current=1;}
        if (max<current) {
            max=current;
            m=a[i];
        }
        else if (max==current && a[i]<m)
            m=a[i];
    }
    printf("%d %d", m, max);
    return 0;
}
