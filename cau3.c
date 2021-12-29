#include <stdio.h>
#include <math.h>
int luy_thua(int n,int i)
{
    int s=1;
    if(i>n)
    {
        return s;
    }
    else
    {
        s=s*2;
    }
    return s=s*luy_thua(n,i+1);
}
int ham_goi_choi(int n)
{
    return luy_thua(n,1);
}
int main()
{
    int n;
    printf("nhap mot so:");
    scanf("%d",&n);
    int a=ham_goi_choi(n);
    printf("\n2^%d=%d",n,a);
    return 0;
}