#include<stdio.h> 

int main(){
int number[10];
int i;

for(i=0;i<10;i++){
	scanf("%d",&number[i]);
}

for(i=0;i<10;i++){
	number[i]+=6;
}

for(i=0;i<10;i++){
	printf("%d\n",number[i]);
}

return 0;
}
