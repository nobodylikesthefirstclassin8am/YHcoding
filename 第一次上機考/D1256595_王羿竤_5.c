#include<stdio.h>
int main(){
int x,y,r,n;
scanf("%d%d",&x,&y);
for(r=x;r<=y;r++){
	for(n=1;n<=y;n++){
	if((n*n)==r){
		printf("%d\n",r);
		}
	}
}
return 0;
}
