#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if (n ==m) {
        printf("1\n");
        return 0;
    }

    int result = 1;
    for (int i=1; i <= m-1; i++) {
        result *= (n - i);
        result /= i;
    }

    printf("%d\n", result);
    return 0;
}
