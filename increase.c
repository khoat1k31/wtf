#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int found=0;
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (i==0 && a[0]<a[1])
            {return 1;
            found=1;}
        else if(i==n-1 && a[n-1]>a[n-2])
            {return 1;
            found=1;}
        else if(a[i]<a[i+1])
            {return 1;
            found=1;}
    }
    if (found=1) printf("YES");
    if (!found) printf("NO");
    return 0;
}
