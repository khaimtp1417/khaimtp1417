#include <stdio.h>
int check(int n,int i)
{
    int count=0;
    if(i==10)
    {
        return count;
    }
    else
    {
        if(n%i==0)
        {
            return count=count+1;
        }
    }
    return count+check(n,i+1);
}
int checkin(int n)
{
    return check(n,2);
}
int main()
{
    int n;
    printf("nhap mot so:");
    scanf("%d",&n);
    int x=checkin(n);
    if(x==0)
    {
        printf("day la so nguyen to");
    }
    else
    {
        printf("day khong phai so nguyen to");
    }
    return 0;
}