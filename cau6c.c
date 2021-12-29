#include <stdio.h>
int tinh_giai_thua(int a,int n,int i)
{
   int s=1;
   if(i>n)
   {
       return a;
   }
   else {
       for(int j=1;j<=i;j++)
       {
           s=s*j;
           printf("%d\n",s);
       }
   }
   return a=s+tinh_giai_thua(a,n,i+1);
}
int ham_goi_choi(int n)
{
    return tinh_giai_thua(0,n,1);
}
int main()
{
    int n;
    printf("nhap mot so:");
    scanf("%d",&n);
    int x=ham_goi_choi(n);
    printf("\n sum=%d",x);
    return 0;
}