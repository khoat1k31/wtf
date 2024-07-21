#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d%D%D", &a, &b, &s);
    int h= abs(a) + abs(b);
    if(h%2==0 && s>=h && s%2==0)
    {
            printf("YES");
    }
    else if(h%2!=0 && s>=h && ((s+1)%2==0))
    {
            printf("YES");
    }
    else printf("NO");
    return 0;
}
