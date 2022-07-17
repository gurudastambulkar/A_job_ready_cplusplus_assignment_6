#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+(i*2);
    printf("Sum is %d",s);
    return 0;
}
