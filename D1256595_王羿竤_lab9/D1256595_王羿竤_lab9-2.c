#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",cout(n,m));
}

int cout(int a,int b){
	if(b==1){
		return a;
	}
	else{
		return a+a*(b-1);
	}
}
