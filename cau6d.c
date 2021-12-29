#include <stdio.h>
#include <math.h>
double tinh_can(int n,int i)
{

   float s=0;
   if(i>n)
   {
       return s;
   }
   else {
       
       s=sqrt(i);
       printf("%f\n",s);
      
   }
   return s=s+tinh_can(n,i+1);
}
double ham_goi_choi(int n)
{
    return tinh_can(n,1);
}
int main()
{
    int n;
    printf("nhap mot so:");
    scanf("%d",&n);
    float x=ham_goi_choi(n);
    printf("\n sum=%f",x);
    return 0;
}