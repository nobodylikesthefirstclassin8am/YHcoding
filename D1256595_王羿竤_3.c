#include<stdio.h>
int num1,num2,num3,num4,num5;
float a,b,c,d,e;
float sum;
int main(){
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	if(num1<=59){
		printf("F");
		a=num1*1+num1*0.1;
	}
	if(num1>=60 && num1<=69){
		printf("D");
		a=num1*5+num1*0.15;
	}
	if(num1>=70 && num1<=79){
		printf("C");
		a=num1*7+num1*0.75;
	}
	if(num1>=80 && num1<=89){
		printf("B");
		a=num1*9+num1*0.85;
	}
	if(num1>=90){
		printf("A");
		a=num1*10+num1*1.0;
	}	
	printf("\n");
	
	if(num2<=59){
		printf("F");
		b=num2*1+num2*0.1;
	}
	if(num2>=60 && num2<=69){
		printf("D");
		b=num2*5+num2*0.15;
	}
	if(num2>=70 && num2<=79){
		printf("C");
		b=num2*7+num2*0.75;
	}
	if(num2>=80 && num2<=89){
		printf("B");
		b=num2*9+num2*0.85;
	}
	if(num2>=90){
		printf("A");
		b=num2*10+num2*1.0;
	}	
	printf("\n");
	
	if(num3<=59){
		printf("F");
		c=num3*1+num3*0.1;
	}
	if(num3>=60 && num3<=69){
		printf("D");
		c=num3*5+num3*0.15;
	}
	if(num3>=70 && num3<=79){
		printf("C");
		c=num3*7+num3*0.75;
	}
	if(num3>=80 && num3<=89){
		printf("B");
		c=num3*9+num3*0.85;
	}
	if(num3>=90){
		printf("A");
		c=num3*10+num3*1.0;
	}	
	printf("\n");
	
	if(num4<=59){
		printf("F");
		d=num4*1+num4*0.1;
	}
	if(num4>=60 && num4<=69){
		printf("D");
		d=num4*5+num4*0.15;
	}
	if(num4>=70 && num4<=79){
		printf("C");
		d=num4*7+num4*0.75;
	}
	if(num4>=80 && num4<=89){
		printf("B");
		d=num4*9+num4*0.85;
	}
	if(num4>=90){
		printf("A");
		d=num4*10+num4*1.0;
	}	
	printf("\n");
	
	if(num5<=59){
		printf("F");
		e=num5*1+num5*0.1;
	}
	if(num5>=60 && num5<=69){
		printf("D");
		e=num5*5+num5*0.15;
	}
	if(num5>=70 && num5<=79){
		printf("C");
		e=num5*7+num5*0.75;
	}
	if(num5>=80 && num5<=89){
		printf("B");
		e=num5*9+num5*0.85;
	}
	if(num5>=90){
		printf("A");
		e=num5*10+num5*1.0;
	}
	printf("\n");
sum=a+b+c+d+e;
printf("Total scholarship : %.2f",sum);
return 0;
}
