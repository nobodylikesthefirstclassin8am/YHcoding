#include<stdio.h>
int num1,num2;
int main(){
while(1){
	
	printf("Please wnter 2 integers:");
	scanf("%d%d",&num1,&num2);
	if(num1%num2==0){
		printf("the first number is a multiple of the second one.\n");
	}
	else
		printf("the first number is not a multiple of the second one.");
	printf("\n\n");
}
return 0;
}
