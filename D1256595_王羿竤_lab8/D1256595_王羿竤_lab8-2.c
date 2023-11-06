#include<stdio.h>

int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d",cout(a,b,c,d));
return 0;
}


int cout(int x,int y,int z,int w){
	int max;
	max=x;
	if(y>=max){
		max=y;
	}
	if(z>=max){
		max=z;
	}
	if(w>=max){
		max=w;
	}
	return max;
} 
