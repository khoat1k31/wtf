#include <stdio.h>
#define MAX 1000000

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int count[MAX + 1] = {0}; // +1 để đảm bảo truy cập đến chỉ số 1000000

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }

    for (int i = 0; i <= MAX; i++) {
        if (count[i] > 0) {
            printf("%d %d\n", i, count[i]);
        }
    }
    return 0;
}
