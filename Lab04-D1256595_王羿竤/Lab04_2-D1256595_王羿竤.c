#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int countDigits(int num) 
{
    int count=0;
    while(num!=0){
        num/= 10;
        ++count;
    }
    return count;
}
int main() 
{
    int number[10];
    int total_characters=0;
    int a;
    srand(time(NULL));

    for(a=0;a<10;a++){
    	number[a]=rand()%1000+1;
    }
    printf("Value\tTotal Characters\n");
    for(a=0;a<10;a++){
        int chars_printed=0;
        printf("%d\t",number[a]);
        chars_printed=countDigits(number[a]);
        total_characters+=chars_printed;
        printf("%d\n",total_characters);
    }
    return 0;
}
