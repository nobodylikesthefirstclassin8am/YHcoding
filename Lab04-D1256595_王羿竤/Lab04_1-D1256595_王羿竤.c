#include <stdio.h>

int main() {
    unsigned int hex;
    char a[100];
    char b;
    int hour,min,sec;


    printf("%-15.8u\n",40000);//(a) 


    scanf("%x",&hex);//(b)


	printf("\n200 with and without a sign:\n");//(c)
    printf("  %+d\n",200);
    printf("  %d\n",200);


    printf("\n100 in hexadecimal form preceded by 0x:\n");//(d)
	printf("  0x%X\n",100);

    
    printf("\nRead characters into array s until the letter p is encountered:\n");//(e)
    int i = 0;
    while (scanf("%c",&a[i])==1&&a[i]!='p'){
        i++;
    }
    a[i] = '\0';

	printf("\n1.234 in a 9-digit field with preceding zeros:\n");//(f)
    printf("  %09.4f\n",1.234);


	printf("\nthe time is:");//(g)
    scanf("%d:%d:%d", &hour, &min, &sec);
    printf("Hour:%d,Minute:%d,Second:%d\n",hour,min,sec);

    
    scanf(" \"%[^\"]\"",b);//(h)
    

    scanf("%2d:%2d:%2d",&hour,&min,&sec);//(i)

    return 0;
}


