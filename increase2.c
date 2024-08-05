#include <stdio.h>

int main() {
    int t;  // Số bộ test
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int maxLength = 1;
        int currentLength = 1;
        int start = 0;

        int longestSegment[1000];
        int longestSegmentLength = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                currentLength++;
            } else {
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    longestSegmentLength = 0;
                }
                if (currentLength == maxLength) {
                    for (int j = 0; j < currentLength; j++) {
                        longestSegment[longestSegmentLength++] = a[start + j];
                    }
                }
                start = i;
                currentLength = 1;
            }
        }


        if (currentLength > maxLength) {
            maxLength = currentLength;
            longestSegmentLength = 0;
        }
        if (currentLength == maxLength) {
            for (int j = 0; j < currentLength; j++) {
                longestSegment[longestSegmentLength++] = a[start + j];
            }
        }
        printf("Test %d:\n", test);
        printf("%d\n", maxLength);
        for (int i = 0; i < longestSegmentLength; i++) {
            printf("%d ", longestSegment[i]);
            if ((i + 1) % maxLength == 0) {
                printf("\n");
            }
        }
    }

    return 0;
}
