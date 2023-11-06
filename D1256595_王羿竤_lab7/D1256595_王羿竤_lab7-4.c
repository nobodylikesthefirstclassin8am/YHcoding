#include <stdio.h>


int main() {
	float a,b,c,count, ans1, ans2;
	scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    count = b * b - 4 * a * c;

    if (count > 0) {
        ans1 = (-b + sqrt(count)) / (2 * a);
        ans2 = (-b - sqrt(count)) / (2 * a);
        printf("%.2f\n", ans1);
        printf("%.2f\n", ans2);
    } 
	else if (count == 0) {
        ans1 = ans2 = -b / (2 * a);
        printf("%.2f\n", ans1);
    } 

    return 0;
}
