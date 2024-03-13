#include<stdio.h>
void swap(const int *a,int n){
	int i;
	int x;
	int y;
	int z=n--;
	for(i=0;i<n;i++){
		x=a[i];
		y=a[z-i];
		a[i]=y;
		a[z-i]=x;
	}
	return a[];
}
int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	printf("the inner product is=%d",swap(a,n));
	return 0;
}
