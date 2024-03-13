#include<stdio.h>

int swap(long *a,long *b){
	printf("num1=%d,num2=%d",*a,*b);
	return 0;
}

int main(){
	
	long *lptr1,*lptr2;
	long value1=100,value2=200;
	

	lptr1=&value2;
	lptr2=&value1;
	swap(lptr1,lptr2);
	return 0;
	}
