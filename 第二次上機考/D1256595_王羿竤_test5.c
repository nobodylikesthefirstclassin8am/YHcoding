#include <stdio.h>

int main() {
    unsigned int num1, num2;

    while (1) {
    	scanf("%u %u",&num1,&num2);
    	if(num1==0&&num2==0){
    		break;
		}
        int carrys=count(num1, num2);
        if (carrys==0){
            printf("No carry operation.\n");
        }
		else{
            printf("%d carry operation.\n",carrys);
        }
    }
    return 0;
}

int count(unsigned int num1, unsigned int num2){
    int carry=0;
    int carrys=0;

    while(num1>0||num2>0){
        int dig1=num1%10;
        int dig2=num2%10;

        int sum=dig1+dig2+carry;
        carry=sum/10;

        if (carry>0){
            carrys++;
        }
		num1/=10;
        num2/=10;
    }
    return carrys;
}
