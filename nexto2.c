#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int max=1, cr=1;
    for (int i=1; i<n; i++){
        if(a[i]!=a[i-1])
        {
            cr++;
            if(cr>max)
                max=cr;
        }
        else {cr=1;}
    }
    printf("%d", max);
    return 0;
}
