#include<stdio.h>

int main()
{

int x,x2,x3,fx;
printf("please enter a integers:");
scanf("%d",&x);
x2=x*x;
x3=x2*x;
fx=(x3-(2*x2)+(10*x)-5)/(x-10);
printf("the answer is %d",fx);
return 0;
}
