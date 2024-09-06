#include<stdio.h>
#include<math.h>
int tn(int n)
{
    int tn=0, org=n, tong=0;
    while (n!=0) {
        tn=tn*10+n%10;
        tong+=n%10;
        n/=10;
    }
    if (tn==org && tong%10==8 ) return 1;
    else return 0;
}
int sc(int n)
{
    while (n!=0) {
        if (n%10==6) {
            return 1;
            break;
        }
        n/=10;
    }
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    for (int i=a; i<=b; i++)
    {
        if(tn(i) && sc(i)) printf("%d ", i);
    }
    return 0;
}

