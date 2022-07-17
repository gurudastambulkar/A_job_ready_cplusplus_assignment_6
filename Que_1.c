#include<stdio.h>
#include<conio.h>
int main()
{
    int s=0,i,n;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+i;
    printf("Sum is %d",s);
    return 0;
}
