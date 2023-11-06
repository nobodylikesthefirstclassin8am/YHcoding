#include<stdio.h>

int main()
{

int x,y,remainder;
printf("please enter two integers (x and y):");
scanf("%d%d",&x,&y);
remainder=x%y;
printf("the remainder of x/y= %d",remainder);
return 0;
}
