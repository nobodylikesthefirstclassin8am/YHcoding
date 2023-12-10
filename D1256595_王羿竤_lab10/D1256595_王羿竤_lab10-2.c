#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int i;

  for (i=0;i<10;i++) {
    float num=(float)rand()/(RAND_MAX + 1.0);
    printf("%.2f ",num);

    if ((i+1)%5==0){
      printf("\n");
    }
  }

  return 0;
}
