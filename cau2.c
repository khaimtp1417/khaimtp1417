#include <stdio.h>
int tinh_giai_thua(int n,int i)
{
    int mul=1;
    if(i>n)
    {
        return mul;
    }
    else{
        mul=mul*i;
    }
    return mul=mul*tinh_giai_thua(n,i+1);
}
int ham_goi_choi(int n)
{
    return tinh_giai_thua(n,1);
}
int main()
{
    int n;
    printf("nhap mot so:");
    scanf("%d",&n);
    int x=ham_goi_choi(n);
    printf("\n%d! =%d",n,x);
}