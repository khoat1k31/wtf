#include<stdio.h>
int main()
{
    int n, m=0, c=0;
    int mi, ci;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d%d", &mi, &ci);
        if(mi>ci){m++;}
        else if(ci>mi){c++;}
        else
        {
            m++;
            c++;
        }
    }
    if (m>c)
    {
        printf("Mishka");
    }
    else if (c>m)
        printf("Chris");
    else printf("Friendship is magic!^^");
    return 0;
}
