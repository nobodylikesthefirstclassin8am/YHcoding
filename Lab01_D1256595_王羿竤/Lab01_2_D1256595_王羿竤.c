#include<stdio.h>

int main(){
	
	float *fptr;
	float value1=7.3,value2;
	

	fptr=&value1;
	printf("the value of object pointed to by fptr=%f",*fptr);
	value2=*fptr;
	printf("\nthe value of number2=%f",value2);
	printf("\nthe address of number1=%X",fptr);
	printf("\nthe address stored in fptr=%X",fptr);
	
	return 0;
}
