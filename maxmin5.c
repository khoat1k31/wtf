#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    long long a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    long long min_product = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long product = a[i] * a[j];
            if (product < min_product) {
                min_product = product;
            }
        }
    }
    printf("%lld\n", min_product);
    return 0;
}
