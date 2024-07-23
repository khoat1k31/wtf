#include <stdio.h>

int main() {
    int d1, d2, d3;
    scanf("%d %d %d", &d1, &d2, &d3);
    int route1 = d1 + d2 + d3;
    int route2 = 2 *(d1 + d2);
    int route3 = 2 * (d1 + d3);
    int route4 = 2 * (d2 + d3);

    int min = route1;
    if (route2 < min) {
        min = route2;
    }
    if (route3 < min) {
        min = route3;
    }
    if (route4 < min) {
        min = route4;
    }

    printf("%d\n", min);

    return 0;
}
