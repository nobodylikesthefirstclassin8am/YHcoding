#include<stdio.h>

int main(){
	int num1;
	scanf("%d",&num1);
	printf("%d",fac(num1));
	
return 0;
}


int fac(int x){
	int i,ans=1;
	for(i=1;i<=x;++i){
		ans=ans*i;
	}
	return ans;
}

