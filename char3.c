#include<stdio.h>
int main()
{
    int a;
    scanf("%c", &a);
    if (a>=97 && a<=122)
        printf("%c",a);
    else if (a>=65 && a<=90)
    {
        a +=32;
        printf("%c", a);
    }
    else printf("NO");
    return 0;
}
