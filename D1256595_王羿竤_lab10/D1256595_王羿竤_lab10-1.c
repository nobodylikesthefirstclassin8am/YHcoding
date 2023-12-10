#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  	srand(time(NULL));
  	int i;

  for(i=0;i<100;i++){
    int num = rand()%(30+5+1)-5;
    printf("%d ",num);

    if ((i + 1) % 5 == 0){
      printf("\n");
    }
  }

  return 0;
}
