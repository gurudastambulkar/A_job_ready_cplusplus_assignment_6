#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+(i*i);
    printf("Sum is %d",s);
    return 0;
}
