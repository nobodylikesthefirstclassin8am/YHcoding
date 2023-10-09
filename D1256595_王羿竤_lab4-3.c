#include<stdio.h>
int num1;
int main(){
while(1){
	printf("Please enter the grade:");
	scanf("%d",&num1);
	if(num1<=59){
		printf("the grade is F");
	}
	if(num1>=60 && num1<=69){
		printf("the grade is C");
	}
	if(num1>=70 && num1<=79){
		printf("the grade is B");
	}
	if(num1>=80 && num1<=100){
		printf("the grade is A");
	}	
	printf("\n\n");
}
return 0;
}
