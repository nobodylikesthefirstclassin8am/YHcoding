#include <stdio.h>

int main(){
    int h;
    char w;

    scanf("%d",&h);
    scanf(" %c",&w);
	
	tri(h,w);
}

void tri(int a,char b){
    int i,j;

    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
        	printf(" ");
        }

        for(j=1;j<=2*i-1;j++){
        	printf("%c",b);
        }
        
		for(j=1;j<=a-i;j++){
        	printf(" ");
        }
    printf("\n");
    }

    return 0;
}
