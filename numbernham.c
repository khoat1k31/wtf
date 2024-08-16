#include<stdio.h>
int gcd(int a, int b)
{
    while (b!=0) {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int check(int n)
{
    for (int i=2; i*i<n; i++)
    {
        if (n%i==0) return 0;
        else return 1;
    }
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int u=gcd(a,b);
    if (check(u)) printf("YES");
    else printf("NO");
    return 0;
}
