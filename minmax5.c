#include<stdio.h>
void sort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    sort(a,n);
    printf("%d", a[k-1]);
    return 0;
}
