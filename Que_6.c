#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,f=1;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;n--)
        f=f*n;
    printf("Factorial is %d",f);
    return 0;
}
