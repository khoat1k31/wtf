#include<stdio.h>
int check1(int n)
{
      int org=n;
      int sum=0;
      while (n>0)
      {
          int d=n%10;
          sum=sum+d*d*d;
          n/=10;
      }
      if(sum==org)
      {
          return 1;
      }
      return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        if (check1(i))
            printf("%d ", i);
    }
    return 0;
}
