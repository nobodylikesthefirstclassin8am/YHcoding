#include<stdio.h>
int main(){
	int b;
	do{
	scanf("%d",&b);
	if(b<=0){
		break;
	}
	printf("%d\n",power(b));		
	}
	while(1);
}

int power(int b){
	if(b<=0 ||b==1){
		return 1;
	}
	if(b%2!=0){
		return b*power(b-2);
	}
	if(b%2==0){
		return (b-1)*power(b-3);
	}
}
