#include<stdio.h> 
int inner_product(const int *a, const int *b, int n) {
  int sum=0;
  int i;
  for(i=0;i<n;++i){
    sum += *(a+i) * *(b+i);
  }
  return sum;
}

int main(){
	int a[]={1,2,3,4,5};
	int b[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	printf("the inner product is=%d",inner_product(a,b,n));
	return 0;
}
