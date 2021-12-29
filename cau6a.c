#include <stdio.h>
int tinh(int n,int i)
{
    int sum=0;
    if(i>n)
    {
        return sum;
    }
    else{
        sum=2*i+1;
    }
    return sum=sum+tinh(n,i+1);
}
int ham_goi_choi(int n)
{
    return tinh(n,1);
}
int main()
{
    int n;
    printf("nhap mot so:");
    scanf("%d",&n);
    int s=ham_goi_choi(n);
    printf("\n sum=%d",s);
    return 0;
}