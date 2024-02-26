#include <stdio.h>
int cout(long a){
	if(a==0||a==1){
		return 1;
	}
	else{
		return a*cout(a-1);
	}
}

int main() {
	long num;
	scanf("%d",&num);
	long *lptr;
	lptr=&num;
	
	
	printf("the the factorial of the integer= %d\n",cout(*lptr));
	return 0;
}
