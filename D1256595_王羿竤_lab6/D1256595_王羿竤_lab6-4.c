#include<stdio.h>
int main(){
int f,u,r,w,a,b,n,dir,c;
printf("Enter the side length of the diamond (between 3 and 10):");
scanf("%d",&n);
printf("Enter the connecting direction (0: horizontal, 1: vertical):");
scanf("%d",&dir);
printf("Enter the number of diamonds (between 2 and 6):");
scanf("%d",&c);
if(dir==1){
		for(w=0;w<c;w++){
			for (r=0;r<n;r++){				//上半部 
				for(b=9;b>=0;b--){			//D
					if(b==r){
						printf("*");
					}
					else if(b>r){
						printf(" ");
					}
					else{
						printf("@");
					}
				}
				for(a=0;a<10;a++){			//A
					if(a==(r-1)){
						printf("*");
					}
					else if(a<r){
						printf("@");
					}
					else{
						printf(" ");
					}
				} 
			printf("\n");
			}
			
			for (r=0;r<n;r++){				//下半部 
				for(a=0;a<10;a++){			//C 
					if(a==(10-(n-1-r))){
						printf("*");
					}
					else if(a<(10-(n-1-r))){
						printf(" ");
					}		
					else{
						printf("@");
					}
				}
				for(b=9;b>0;b--){			//B
					if(b==(10-(n-1-r)+1)){
						printf("*");
					}
					else if(b>(10-(n-1-r))){
						printf("@");
					}
					else{
						printf(" ");
					}
				}
			printf("\n");
			}
		}
}

else if(dir==0){
			for (r=0;r<n;r++){				//上半部
				for(f=0;f<c;f++){
				for(b=9;b>=0;b--){			//D
					if(b==r){
						printf("*");
					}
					else if(b>r){
						printf(" ");
					}
					else{
						printf("@");
					}
				}
				for(a=0;a<10;a++){			//A
					if(a==(r-1)){
						printf("*");
					}
					else if(a<r){
						printf("@");
					}
					else{
						printf(" ");
					}
				}
				printf("\t");
				}
			printf("\n");
			}
			
			for (r=0;r<n;r++){				//下半部
				for(u=0;u<c;u++){
				for(a=0;a<10;a++){			//C 
					if(a==(10-(n-1-r))){
						printf("*");
					}
					else if(a<(10-(n-1-r))){
						printf(" ");
					}		
					else{
						printf("@");
					}
				}
				for(b=9;b>0;b--){			//B
					if(b==(10-(n-1-r)+1)){
						printf("*");
					}
					else if(b>(10-(n-1-r))){
						printf("@");
					}
					else{
						printf(" ");
					}
				}
				printf("\t");
				}
			printf("\n");
			}					
}	
return 0;
}
