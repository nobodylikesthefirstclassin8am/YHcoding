#include<stdio.h>
int main(){
	int b,e;
	scanf("%d%d",&b,&e);
	printf("%d",power(b,e));
}

int power(int b,int e){
	if(e==0){
		return 1;
	}
	else{
		return b*power(b,e-1);
	}
}
