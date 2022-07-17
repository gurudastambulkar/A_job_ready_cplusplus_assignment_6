#include<stdio.h>
#include<conio.h>
int main()
{
    int x,count=0;
    printf("Enter a number ");
    scanf("%d",&x);
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("There are %d digits in a number",count);
    return 0;
}

