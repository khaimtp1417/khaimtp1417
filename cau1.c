#include <stdio.h>
int NotMain(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum + i/2;
    }
    return sum;
}
int main()
{
    int n;
    printf("nhap n:");
    scanf("%d",&n);

    printf("%d",NotMain(n));
}