#include<stdio.h>
#include<math.h>
int tn(int n)
{
    int tn=0;
    int org=n;
    while (n!=0) {
        tn=tn*10+n%10;
        n/=10;
    }
    if (tn==org) return 1;
    else return 0;
}
int uoc(int n)
{
    int cnt=0;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) {
            cnt++;
            while (n%i==0) n/=i;
        }
    }
    if (n>1) cnt++;
    if (cnt>=3 ) return 1;
    return 0;
}

int main()
{
    int a,b;
    int cnt=0;
    scanf("%d%d", &a, &b);
    for (int i=a; i<=b; i++) {
        if (tn(i) && uoc(i)) {
            printf("%d ", i);
            cnt++;
        }
    }
    if (cnt==0) printf("-1");
    return 0;
}
