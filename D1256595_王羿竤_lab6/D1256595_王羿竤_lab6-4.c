#include<stdio.h>
int main(){
int r,a,b,n;
printf("Enter the side length of the diamond (between 3 and 10):");
scanf("%d",&n);
for (r=0;r<n;r++){
	for(b=10;b>=0;b--){			//D
		if(b>r){
			printf(" ");
		}
		else{
			printf("*");
		}
	}
	for(a=0;a<10;a++){			//A
		if(a<r){
			printf("*");
		}
		else{
			printf(" ");
		}
	} 
printf("\n");
}

for (r=0;r<n;r++){
printf(" ");
	for(a=0;a<10;a++){			//C 
		if(a<(10-(n-1-r))){
			printf(" ");
		}
		else{
			printf("*");
		}
	}








printf("\n");
}
return 0;
}
