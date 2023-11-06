#include<stdio.h>
int main(){
	int num=1;
	float t=0;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	printf("Please enter the product number.\n");
	printf("And enter \"0\" to end the input.\n");
	while(num>0){
	scanf("%d",&num);
		switch(num){
			case 1:
				t+=2.98;
				a++;
				break;
			case 2:
				t+=4.50;
				b++;
				break;
			case 3:
				t+=9.98;
				c++;
				break;
			case 4:
				t+=4.49;
				d++;
				break;
			case 5:
				t+=6.87;
				e++;
				break;
			default:
				printf("This is not a product,please enter the right number.\n");
				break;
			case 0:
				break;	
		}
	}
	printf("Product Number:1\tQuantity sold:%d\n",a);
	printf("Product Number:2\tQuantity sold:%d\n",b);
	printf("Product Number:3\tQuantity sold:%d\n",c);
	printf("Product Number:4\tQuantity sold:%d\n",d);
	printf("Product Number:5\tQuantity sold:%d\n",e);
	printf("The totel price is %.2f",t);
	return 0;	
}
