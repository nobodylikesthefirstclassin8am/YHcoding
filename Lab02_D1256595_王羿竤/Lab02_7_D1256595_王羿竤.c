#include<stdio.h>
#include<stdlib.h>
#define lenth 3	
void SumofArray (int a[][lenth], int *sum){
	int i,j;
	for(i=0;i<lenth;i++){
		for(j=0;j<lenth;j++){
			*sum += a[i][j];
			}
		}
}
int main(void){
	int a[lenth][lenth] = {{1,2},{3,4}};
	int sum=0;
	SumofArray(a,&sum);
	printf("%d",sum);
}
