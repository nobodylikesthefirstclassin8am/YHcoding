#include<stdio.h>
float num1;
int main(){
while(1){
	printf("Please enter the sale amount:");
	scanf("%f",&num1);
	if(num1<=5000.0){
		printf("the bonus is:0");
	}
	if(num1>5000.0 && num1<=10000.0){
		printf("the bonus is:%f",num1*0.1);
	}
	if(num1>10000.0 && num1<=15000.0){
		printf("the bonus is:%f",num1*0.15);
	}
	if(num1>15000.0){
		printf("the bonus is:%f",num1*0.2);
	}	
	printf("\n\n");
}
return 0;
}
