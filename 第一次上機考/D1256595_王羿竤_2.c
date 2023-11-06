#include<stdio.h>
int main(){
int a,b,c,d;
float sum;
scanf("%d%d%d%d",&a,&b,&c,&d);
sum=(a+b+c+d)*1.0/4;
if (a>=b){
	if(b>=c){
		if(c>=d){
			printf("In descending order: %d %d %d %d.",a,b,c,d);//a
		}
		else{
			printf("In descending order: %d %d %d %d.",a,b,d,c);//a
		}
	}
	if(d>=b){
		if(c>=b){
			printf("In descending order: %d %d %d %d.",a,d,c,b);//a
		}
		else{
			printf("In descending order: %d %d %d %d.",a,d,b,c);//a
		}
	}
	if(b<=c){
		if(b>=d){
			printf("In descending order: %d %d %d %d.",a,c,b,d);//a
		}
		else{
			printf("In descending order: %d %d %d %d.",a,c,d,b);//a
		}
	}
	if(a<=d){
		if(b>=c){
			printf("In descending order: %d %d %d %d.",d,a,b,c);//d
		}
		if(c>=a){
			printf("In descending order: %d %d %d %d.",d,c,a,b);//d
		}			
		if(b<=c){
			printf("In descending order: %d %d %d %d.",d,a,c,b);//d
		}
	}
	if(a<=c){
		if(b>=d){
			printf("In descending order: %d %d %d %d.",c,a,b,d);//c
		}
		if(d>=a){
			printf("In descending order: %d %d %d %d.",c,d,a,b);//c
		}			
		if(b<=d){
			printf("In descending order: %d %d %d %d.",c,a,d,b);//c
		}
	}
}
else if(b>=a){
	if(d>=b){
		if(c>=d){
			printf("In descending order: %d %d %d %d.",c,d,b,a);//c		
		}
		if(c>=b){
			printf("In descending order: %d %d %d %d.",d,c,b,a);//d
		}
		if(a>=c){
			printf("In descending order: %d %d %d %d.",d,b,a,c);//d
		}
		if(a<=c){
			printf("In descending order: %d %d %d %d.",d,b,c,a);//d
		}

	}
	if(a>=c){
		if(c>=d){
			printf("In descending order: %d %d %d %d.",b,a,c,d);//b
		}
		else{
			printf("In descending order: %d %d %d %d.",b,a,d,c);//b
		}
	}
	if(a<=c){
		if(a>=d){
			printf("In descending order: %d %d %d %d.",b,c,a,d);//b
		}
		else{
			printf("In descending order: %d %d %d %d.",b,c,d,a);//b
		}
	}
	if(d>=a){
		if(a>=c){
			printf("In descending order: %d %d %d %d.",b,d,a,c);//b
		}
		else{
			printf("In descending order: %d %d %d %d.",b,d,c,a);//b
		}
	}
}
printf("\n");
printf("Average is %f",sum);
return 0;
}
