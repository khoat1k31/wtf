#include<stdio.h>
void check(int n)
{
    int even=0, odd=0;
    while (n > 0) {
        if ((n%10)%2 == 0) {
            even++;
        } else {
            odd++;
        }
        n /= 10;
    }
    printf("%d %d", even, odd);
}
int main()
{
    int n;
    scanf("%d", &n);
    check(n);
    return 0;
}
