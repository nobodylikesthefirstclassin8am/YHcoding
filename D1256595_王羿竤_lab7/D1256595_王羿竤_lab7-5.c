#include <stdio.h>


void printPattern(int n) {
    int i, j;
    for(i = 1; i <= 6; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;



    printPattern(n);

    return 0;
}

