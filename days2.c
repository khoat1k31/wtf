#include<stdio.h>
int main()
{
    unsigned int d, y, w, dl;
    scanf("%d", &d);
    y=d/365;
    w=(d-(d/365)*365)/7;
    dl=d-y*365-w*7;
    printf("%d %d %d", y, w, dl);
    return 0;

}
