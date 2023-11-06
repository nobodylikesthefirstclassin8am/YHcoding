#include<stdio.h>
int main(){
int a,b,c;
while(1){

printf("please enter 3 integers:");
scanf("%d%d%d",&a,&b,&c);

if (a>=b){
	if(b>=c){
		printf("%d %d %d",c,b,a);
	}
	else{
		if(c>=a){
			printf("%d %d %d",b,a,c);
		}		
		else{
			printf("%d %d %d",b,c,a);
		}
	}
}
else{
	if(c>=b){
		printf("%d %d %d",a,b,c);
	}
	else{
		if(c>=a){
			printf("%d %d %d",a,c,b);
		}
		else{
			printf("%d %d %d",c,a,b);
		}
	}
}
printf("\n\n");
}
return 0;
}
