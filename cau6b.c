#include <stdio.h>
float tinh(int n,float i)
{
    float sum=0;
    if(i>n)
    {
        return sum;
    }
    else{
        sum=i/2;
        printf("\n%f",sum);
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
    float s=ham_goi_choi(n);
    printf("\n sum=%.2f",s);
    return 0;
}