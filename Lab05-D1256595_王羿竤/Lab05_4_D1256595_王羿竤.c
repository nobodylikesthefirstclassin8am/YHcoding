#include <stdio.h>

typedef struct {
    int numerator;
    int denominator;
} Fraction;

Fraction addFractions(Fraction f1, Fraction f2){
    Fraction result;
    result.numerator=(f1.numerator*f2.denominator)+(f2.numerator*f1.denominator);
    result.denominator=f1.denominator*f2.denominator;

    return result;
}

void simplifyFraction(Fraction*fraction){
    int gcd=1;
    int i;
    for(i=1;i<=fraction->numerator && i<=fraction->denominator;++i){
        if(fraction->numerator%i==0 && fraction->denominator%i==0){
            gcd=i;
        }
    }
    fraction->numerator/=gcd;
    fraction->denominator/=gcd;
}

int main(){
    Fraction fraction1,fraction2,sum;

    printf("Enter the numerator and denominator of the first fraction: ");
    scanf("%d %d",&fraction1.numerator,&fraction1.denominator);

    printf("Enter the numerator and denominator of the second fraction: ");
    scanf("%d %d",&fraction2.numerator,&fraction2.denominator);

    sum=addFractions(fraction1,fraction2);

    simplifyFraction(&sum);

    printf("The sum of the fractions is: %d/%d\n",sum.numerator,sum.denominator);

    return 0;
}

