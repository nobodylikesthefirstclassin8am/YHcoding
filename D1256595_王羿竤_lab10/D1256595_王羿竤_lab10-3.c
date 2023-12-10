#include<stdio.h> 

int main(){
int number[10];
int sum=0;
int i;

for(i=0;i<10;i++){
	scanf("%d",&number[i]);
}

for(i=0;i<10;i++){
	sum+=number[i];

}

printf("%d\n",sum);
return 0;
}
