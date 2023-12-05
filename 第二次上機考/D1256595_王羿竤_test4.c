#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  while (n != -1) {
    int a = 0;
    int b = 1;
    int i;
    for(i=0;i<n;i++){
      printf("%d ",a);
      int c=a+b;
      a=b;
      b=c;
    }
    printf("\n");
    scanf("%d", &n);
  }
  return 0;
}
