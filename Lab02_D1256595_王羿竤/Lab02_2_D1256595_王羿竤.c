#include<stdio.h>
void largest (int a[], int n, int *largest){
	if(n<=0){
		printf("array is empty");
		return;
	}
	*largest=a[0];
	int i;
	for(i=1;i<n;i++){
		if(a[i]>=*largest){
			*largest=a[i];
		}
	}
}

int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int large;
	largest(a,n,&large);
	printf("the largest is=%d",large);
	return 0;
}

