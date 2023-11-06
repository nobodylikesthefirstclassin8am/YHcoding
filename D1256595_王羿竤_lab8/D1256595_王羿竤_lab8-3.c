#include<stdio.h>
double median (double x, double y, double z);
int main(){
double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%f",median (a,b,c));
return 0;
}

double median (double x, double y, double z){

if (x <= y){
	if (y <= z) {
		return y;
	}
	else if (x <= z){
		return z;
	}
	else{
		return x;
	}
}
if (z <= y){
	return y;
	}
if (x <= z){
	return x;
	}
return z;
}

