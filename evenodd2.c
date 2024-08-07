#include<stdio.h>
void even(int a[], int n)
{
    int ev=0;
     for (int i=0; i<n; i++)
    {
        if (a[i] %2==0){
            ev++;
        }
    }
    printf("%d\n", ev);
    for (int i=0; i<n; i++)
    {
        if (a[i] %2==0){
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
void odd(int a[], int n)
{
    int od=0;
    for (int i=0; i<n; i++){
        if (a[i]%2==1) {
            od++;
        }
    }
    printf("%d\n", od);
    for (int i=0; i<n; i++){
        if (a[i]%2==1) {
            printf(" %d ", a[i]);
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
    int ev=0, od=0;
    even(a, n);
    odd(a,n);
    return 0;
}
