#include<stdio.h>
int main(){
printf("(A)\t\t(B)\t\t(C)\t\t(D)\t\t\n");
int r,a,b;
for (r=0;r<10;r++){
	for(a=0;a<10;a++){			//A 
		if(a<=r){
			printf("*");
		}
		else{
			printf(" ");
		}
	}
		printf("\t");
	
	for(b=10;b>0;b--){			//B
		if(b>r){
			printf("*");
		}
		else{
			printf(" ");
		}
	}
		printf("\t");
	
	for(a=0;a<10;a++){			//C 
		if(a<r){
			printf(" ");
		}
		else{
			printf("*");
		}
	}
		printf("\t");		
		
	for(b=10;b>=0;b--){			//D
		if(b>r){
			printf(" ");
		}
		else{
			printf("*");
		}
	}
		printf("\t");	
		
printf("\n");
}	 
return 0;
}
