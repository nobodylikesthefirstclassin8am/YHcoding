#include<stdio.h>
long fib(long a);
int main(){
	long n;
	scanf("%d",&n);
	printf("%d",fib(n));
}

long fib(long a){
	if(a==0 || a==1){
		return a;
	}
	else{
		return fib(a-1)+fib(a-2);
	}
}
