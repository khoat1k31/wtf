#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int min=0, max=0;

    if (n % 7 == 0) {
        min = 2*(n / 7);
        max = 2*(n / 7);
    } else if (n%7 == 1) {
        min = 2 *(n / 7);
        max = 2*(n / 7) + 1;
    } else if (n%7 == 6) {
        min = 2*(n / 7) + 1;
        max =2*(n / 7) + 2;
    } else {
        min =2*(n / 7);
        max =2 *(n / 7) + 2;
    }

    printf("%d %d", min, max);
    return 0;
}
