#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max=0;
    if (n==2){
        printf("1\n");
        printf("2");
    }
    else if (n%2==0)
        {
            max=n/2;
            printf("%d\n", max);
            for (int i=1; i<=(n/2); i++)
                printf("2 ");
        }
    else
        {
            max=(n-3)/2+1;
            printf("%d\n", max);
            for (int i=1; i<=(n-3)/2; i++)
               { printf("2 ");}
            printf("3");
        }
    return 0;
}
