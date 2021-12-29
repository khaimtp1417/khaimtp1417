#include <stdio.h>
int numberofdigit(int n)
{
    int count=0;
    if(n<10)
    {
        return 1;
    }
    else{
        count=count+1;
    }
    n=n/10;
    return count=count+numberofdigit(n);
}
int main()
{
    int n;
    printf("nhap mot so:");
    scanf("%d",&n);
    int s=numberofdigit(n);
    printf("\n%d co %d chu so",n,s);
}