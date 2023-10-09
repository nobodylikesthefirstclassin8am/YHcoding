#include<stdio.h>
int num1;
int main(){
while(1){
	
	printf("Please wnter 1 integers:");
	scanf("%d",&num1);
	if(num1%2==0){
		printf("the number is a even.");
	}
	else
		printf("the number is not a even.");
	printf("\n");
	
	if(num1%3==0){
		printf("the number is a multiple of 3.");
	}
	else
		printf("the number is not a multiple of 3.");
	printf("\n");
	
	if(num1%5==0){
		printf("the number is a multiple of 5.");
	}
	else
		printf("the number is not a multiple 5.");
	printf("\n\n");
	}
return 0;
}
