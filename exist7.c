#include<stdio.h>
void find(int a[], int n)
{
    int frq[n];
    for (int i=0; i<n; i++) frq[i]=0;
    for (int i=0; i<n; i++) {
       if (frq[i]==0) {
        frq[i]++;
        for (int j=i+1; j<n; j++) {
            if (a[i]==a[j]) {
                frq[i]++;
                frq[j]=-1;
            }
        }
      }
    }

    int found=0;
    for (int i=0; i<n; i++)
    {
        if (frq[i]>n/3) {
            printf("%d ", a[i]);
            found=1;
        }
    }
    if (!found) {
        printf("0");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    find(a, n);
    return 0;
}
