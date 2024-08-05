#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int current=1, max=1, m=a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]==a[i-1]){
            current++;
        }
        else current=1;
        if (current>max) {
            max=current;
            m=a[i];
        }
        else if (current==max && m<a[i])
            m=a[i];
    }
    printf("%d %d", m, max);
    return 0;
}
