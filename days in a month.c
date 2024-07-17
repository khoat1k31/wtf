#include<stdio.h>
int main()
{
    int m, y;
    scanf("%d %d", &m, &y);
    if ((m>=1 && m<=12))
    {
    if ((y%400==0) || (y%4==0 && y%100!=0))
        {
        if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            printf ("31");
        else if (m==2)
            printf("29");
        else if (m==4 || m==6 || m==9 || m==31)
            printf("30");
        }
    else if (y<=0)
            printf ("INVALID");
    else
        {
            if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            printf ("31");
        else if (m==2)
            printf("28");
        else if (m==4 || m==6 || m==9 || m==31)
            printf("30");
        }
    }
    else if (m<=0 || m>12)
        printf("INVALID");

    return 0;
}
