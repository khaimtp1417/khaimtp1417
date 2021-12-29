#include <stdio.h>
int tinh_luy_thua(int a,int b,int i)
{
    int s=1;
    if(i>b)
    {
        return  s;
    }
    else{
        s=s*a;
    }
    return s=s*tinh_luy_thua(a,b,i+1);
}
int ham_goi_choi(int a,int b)
{
    return tinh_luy_thua(a,b,1);
}
int main()
{
    int a,b;
    printf("nhap so thu nhat:");
    scanf("%d",&a);
    printf("nhap so thu hai :");
    scanf("%d",&b);
    int s=ham_goi_choi(a,b);
    printf("\n%d^%d=%d",a,b,s);
    return 0;

    
}