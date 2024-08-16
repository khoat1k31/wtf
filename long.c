#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int p,q;
    int a[100]={0};
    scanf("%d", &p);
    for (int i=0; i<p; i++) {
        int level;
        scanf("%d", &level);
        a[level-1]=1;
    }
    scanf("%d", &q);
    for (int i=0; i<q; i++) {
        int level;
        scanf("%d", &level);
        a[level-1]=1;
    }
    bool complt=true;
    for (int i=0; i<n; i++) {
        if (a[i]==0) {
            complt=false;
            break;
        }
    }
    if (complt) {
        printf("WIN");
    }
    else {printf("LOSE");}
    return 0;
}
