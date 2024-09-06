#include<stdio.h>
#include<math.h>
int nt(int n)
{
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) return 0;
    }
    return 1;
}
int check(int n)
{
    int org=n;
    int max=n%10;
    n/=10;
    while (n!=0) {
        if (n%10>max) return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    int n;
    int cnt=0;
    scanf("%d", &n);
    for (int i=n; i>=2; i--)
    {
        if (nt(i) && check(i)) {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n");
    printf("%d", cnt);
}
