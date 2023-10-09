#include<stdio.h>

int main()
{

int x1,x2,x3,x4,x5,sum,average;
printf("please enter five integers:");
scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
sum=(x1+x2+x3+x4+x5);
average=sum/5;
printf("the average= %d",average);
return 0;
}
