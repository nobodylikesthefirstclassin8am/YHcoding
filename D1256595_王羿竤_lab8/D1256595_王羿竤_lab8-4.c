#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	printf("%d",cout(a));
}

int cout(int x){
	return 6*(x*x*x*x)+5*(x*x*x)+4*(x*x)+3*x+2;
}
