#include<stdio.h> 
int main(){
int i=3;
int sum=0;
while(i<=300){
	sum=i+sum;
	i+=3;
}
printf("%d",sum);
return 0;
}
