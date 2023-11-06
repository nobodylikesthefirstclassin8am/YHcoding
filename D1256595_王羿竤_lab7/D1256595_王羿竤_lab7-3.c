#include<stdio.h>
void even(int N){
 if (N <= 1){
  printf("0\n");
  return;
 }
 int count=0;
 int i;
 for(i = 0; count < N; i += 2){
  printf("%d ", i);
  count++;
  if(count % 10 == 0){
   printf("\n");
  }
 }
 if(N % 10!= 0){
  printf("\n");
 }
}
int main(void){
 int N;
 
 scanf("%d", &N);
 even(N);
 return 0;
}
