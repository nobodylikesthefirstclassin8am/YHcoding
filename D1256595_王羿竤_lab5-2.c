#include<stdio.h> 
int main(){
int i=1;
int sum=1;
int N;
printf("please enter a number:");
scanf("%d",&N);
while(i<=N){
	sum=i*sum;
	i++;
}
printf("%d!=%d",N,sum);
return 0;	
}
