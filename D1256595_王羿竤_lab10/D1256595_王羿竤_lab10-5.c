#include<stdio.h> 

int main(){
int number[10];
int array[10];
int i;

for(i=0;i<10;i++){
	scanf("%d",&number[i]);
}

for(i=0;i<10;i++){
	if(i==9){
		array[i]=number[i]+number[0];
	}
	else{
		array[i]=number[i]+number[i+1];
	}
}

for(i=0;i<10;i++){
	printf("%d\n",array[i]);
}

return 0;
}
