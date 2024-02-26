#include<stdio.h>

int main(){
	
	long *lptr;
	long value1=200000,value2;
	

	lptr=&value1;
	printf("the value of object pointed to by lptr=%d",*lptr);
	value2=*lptr;
	printf("\nthe value of value2=%d",value2);
	printf("\nthe address of value1=%X",lptr);
	printf("\nthe address stored in lptr=%X",lptr);
	
	return 0;
}

