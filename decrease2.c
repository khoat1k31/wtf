#include<stdio.h>
int check(int a[], int n)
{
    for (int i=1; i<n; i++)
    {
        if (a[i]>=a[i-1]) return 0;
        else return 1;
    }
}
void sx(int a[], int n)
{
    int temp;
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++){
            if (a[j]>=a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    if (check(a,n)) {
        printf("YES\n");
        for (int i=0; i<n; i++) printf("%d ", a[i]);
    }
    else {
        printf("NO\n");
        sx(a,n);
        for (int i=0; i<n; i++)
            printf("%d ", a[i]);
    }
    return 0;
}
