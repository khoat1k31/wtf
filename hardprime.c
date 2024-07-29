#include<stdio.h>

int check1(int n)  // kiểm tra có phải số nguyên tố
    {
        if(n<=1)
            return 0;
        for (int i=2; i*i<=n; i++)
        {
            if (n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
int check2(int n)   //kiểm tra từng chữ số có phải snt
{
    for (int j=1; j<=n; j++)
    {
        if (n%10==2 || n%10==3 || n%10==5 || n%10==7)
            return 1;
        n/=10;
    }
    return 0;
}

int check3(int n)  //kiểm tra tổng từng chữ số có phải là snt
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    return check1(sum);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int n=a; n<=b; n++)
    {
        if (check2(n)==1 && check3(n)==1 && check1(n)==1)
        {
            printf("%d ", n);
        }
    }
    return 0;

}



