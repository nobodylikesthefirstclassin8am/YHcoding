#include<stdio.h>
int main(){
	int a;
	while(1){
		scanf("%d",&a);
		if(a==0){
			break;
		}
		if(a%4!=0){
			printf("%d is a common year.\n",a);
		}
		if(a%100==0 && a%400!=0){
				printf("%d is a common year.\n",a);
		}
		if(a%4==0 && a%100!=0){
			printf("%d is a leap year.\n",a);
		}
		if(a%400==0){
			printf("%d is a leap year.\n",a);
		}
	}
}

