#include<stdio.h>
int main(){
int n,a,b,c,d,e,f;
scanf("%d",&n);

while(n>1000000 || n<0){
	printf("Overflow.");
	break;
	}
while(n<=1000000 && n>=0){
	if(n<1000 && n>=100){
		a=n*0.01;
		b=n*0.1-(a*10);
		c=n-(a*100)-(b*10);
		if(c==0 && b==0){
		printf("%d",a);
		}
		else{
		printf("%d%d%d",c,b,a);
		}
	break;
	}
	
	if(n<10000 && n>=1000){
		a=n*0.001;
		b=n*0.01-(a*10);
		c=n*0.1-(a*100)-(b*10);
		d=n-(a*1000)-(b*100)-(c*10);
		if(c==0 && b==0 && d==0){
		printf("%d",a);
		}
		else{
		printf("%d%d%d%d",d,c,b,a);
		}
	break;
	}
	
	if(n<100000 && n>=10000){
		a=n*0.0001;
		b=n*0.001-(a*10);
		c=n*0.01-(a*100)-(b*10);
		d=n*0.1-(a*1000)-(b*100)-(c*10);
		e=n-(a*10000)-(b*1000)-(c*100)-(d*10);
		if(c==0 && b==0 && d==0 && e==0){
		printf("%d",a);
		}
		else{
		printf("%d%d%d%d%d",e,d,c,b,a);
		}
	break;
	}
	
	if(n<1000000 && n>=100000){
		a=n*0.00001;
		b=n*0.0001-(a*10);
		c=n*0.001-(a*100)-(b*10);
		d=n*0.01-(a*1000)-(b*100)-(c*10);
		e=n*0.1-(a*10000)-(b*1000)-(c*100)-(d*10);
		f=n-(a*100000)-(b*10000)-(c*1000)-(d*100)-(e*10);
		if(c==0 && b==0 && d==0 && e==0 && f==0){
		printf("%d",a);
		}
		else{
		printf("%d%d%d%d%d%d",f,e,d,c,b,a);
		}
	break;
	}
	
	if(n=1000000){
	printf("1");
	break;
	}
}
return 0;
}
