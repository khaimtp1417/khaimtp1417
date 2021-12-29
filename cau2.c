#include <stdio.h>
int NotMain(int a[],int n)
{
    int max=a[i];
    for(int i=1;i<n;i++)
    {
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
void output(int a[],int n)
{
    for(int i=0;i<n;i++)
        {
            printf("%d  ",a[i]);
        }
}
void input(int a[],int* n)
{
     printf("nhap n:");
    scanf("%d",n);
    for(int i=0;i<*n;i++)
    {
        prinf("gia tri cua a[%d] la:",i);
        scanf("%d",&a[i]);
    }
}
int main()
{
    int n,a[1000] ;
   input(a,&n);
   output(a,n);
   pirnf("\n max=%d",NotMain(a,n))
    
}