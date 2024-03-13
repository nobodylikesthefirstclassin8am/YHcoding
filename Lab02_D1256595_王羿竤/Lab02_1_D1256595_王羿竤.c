#include<stdio.h>
int main(){
int b[5] = {10, 20, 30, 40, 50};
int *bptr = &b[0];

printf("%d\n",*(bptr + 3));
printf("%p\n",&b[3]);
printf("%d\n",&b[3]);
printf("%d",bptr[1]);

return 0;
}
