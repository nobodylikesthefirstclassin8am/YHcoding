#include<stdio.h>

int add(long a,long b){
	return a+b;
}


int main(){
	
	long *lptr1,*lptr2;
	long value1=100,value2=200;
	

	lptr1=&value1;
	lptr2=&value2;
	printf("num1+num2=%d",add(*lptr1,*lptr2));
	return 0;
}

