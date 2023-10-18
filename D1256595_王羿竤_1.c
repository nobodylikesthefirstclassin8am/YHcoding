#include<stdio.h>
int main(){
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=a%b;
	printf("The remainder of %d / %d is %d.\n",a,b,sum);
	if(sum==0){
		if(a%2==0){
			printf("%d is even.\n",a);
		}
		if(a%2!=0){
			printf("%d is not even.\n",a);
		}
		if(a%5==0){
			printf("%d is divisible by 5.\n",a);
		}
		if(a%5!=0){
			printf("%d is not divisible by 5.\n",a);
		}		
		if(a%10==0){
			printf("%d is divisible by 10.\n",a);
		}
		if(a%10!=0){
			printf("%d is not divisible by 10.\n",a);
		}		
	}
return 0;
}
