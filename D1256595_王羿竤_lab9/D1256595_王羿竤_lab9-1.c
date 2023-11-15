#include<stdio.h>

int main(){
	int n,re;
	scanf("%d",&n);
	printf("%d",cout(n));
}

int cout(int a){
	if(a==0||a==1){
		return 1;
	}
	else{
		return a*cout(a-1);
	}
}
