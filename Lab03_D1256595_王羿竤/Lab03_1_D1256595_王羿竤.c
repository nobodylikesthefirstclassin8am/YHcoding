#include <stdio.h>
#include <string.h>

int main() {
    float f;
    char s1[100],s2[100],s3[100];

    printf("Enter a float number:");
    scanf("%f",&f);
    printf("Enter string s1:");
    scanf(" %[^\n]",s1);
    printf("Enter string s2:");
    scanf(" %[^\n]",s2);

    printf("\nThe input are:\n");
    printf("  f:%.2f\n",f);
    printf("  s1:%s\n",s1);
    printf("  s2:%s\n",s2);//(a)


    strncpy(s3,s1,6);
    s3[6]='\0';
    printf("\ns3 (first 6 chars of s1): %s\n",s3);//(b)


    strncat(s3,s2,6);
    printf("s3 (appended with first 6 chars of s2): %s\n",s3);//(c)


    int compare_result=strncmp(s1,s2,7);
    if(compare_result==0){
        printf("\nFirst 7 characters of s1 and s2 are equal\n");
    }
	else if(compare_result > 0){
		printf("\nFirst 7 characters of s1 are lexicographically greater than s2\n");
    }
	else{
    	printf("\nFirst 7 characters of s1 are lexicographically less than s2\n");
    }//(d)


    char *n_pos = strchr(s1,'n');
    if (n_pos) {
        printf("\ns1 contains 'n' at position %ld\n", n_pos-s1);
        printf("Substring starting with 'n': %s\n", n_pos);
    } else {
        printf("\ns1 does not contain 'n'\n");
    }//(e)


    char *bc_pos = strstr(s2, "bc");
    if (bc_pos) {
        printf("\ns2 contains \"bc\" at position %ld\n", bc_pos - s2);
        printf("Substring starting with \"bc\": %s\n", bc_pos);
    } else {
        printf("\ns2 does not contain \"bc\"\n");
    }//(f)


    int i;
    for (i = 0; s2[i] != '\0'; i++) {
        char *char_pos = strchr(s1, s2[i]);
        if (char_pos) {
            printf("\nFirst occurrence of '%c' in s1 is at position %ld\n", s2[i], char_pos - s1);
            printf("Substring starting with the character: %s\n", char_pos);
            break;
        }
    }//(g)

    
    printf("\nTokens from s3:\n");
    char *token = strtok(s3," ");
    while (token) {
        printf("%s ",token);
        token = strtok(NULL," ");
    }
    printf("\n");//(h)

   
    char f_str[20];
    sprintf(f_str,"%.3f",f);
    printf("\nf converted to string with 3-digit fraction part: %s\n",f_str);//(i)
    
    
    int num_chars = 0;
	int p;
	for (p=0;s3[p]!='\0';p++){
    if (s3[p]>='0'&&s3[p]<='9'){
    	break;
    }
    num_chars++;
	}
	printf("\nNumber of characters before the first digit character in s3: %d\n",num_chars);//(j)
}

