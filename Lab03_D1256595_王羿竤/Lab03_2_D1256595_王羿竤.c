#include <stdio.h>
#include <string.h>

int main() {
    char text[100],search[50];
    int count=0;
    char *occurrence;

    printf("Enter a line of text: ");
    fgets(text,sizeof(text),stdin);

    printf("Enter a search string: ");
    scanf("%s",search);

    occurrence=strstr(text,search);


    while(occurrence){
        count++;
        occurrence=strstr(occurrence+strlen(search),search);
    }

    if(count>0){
        printf("\nThe search string \"%s\" occurs %d times in the text.\n",search,count);
    } else {
        printf("\nThe search string \"%s\" is not found in the text.\n",search);
    }

    return 0;
}

