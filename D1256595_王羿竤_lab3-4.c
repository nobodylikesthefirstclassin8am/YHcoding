#include<stdio.h>
int main()
{
int r,d;
float circu,area;
float PI=3.14159;
printf("please enter a radius:");
scanf("%d",&r);
d=r*2.0;
circu=d*PI;
area=r*r*PI;
printf("the diameter is %d\n",d);
printf("the circumference is %f\n",circu);
printf("the area is %f",area);
return 0;
}
