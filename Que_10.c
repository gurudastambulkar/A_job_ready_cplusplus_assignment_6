#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y=0;
    printf("Enter a number to reverse ");
    scanf("%d",&x);
    while(x!=0)
    {
        if(y!=0)
            y=y*10;
        y=x%10+y;
        x=x/10;
    }
    printf("After reversing %d",y);
    return 0;
}
