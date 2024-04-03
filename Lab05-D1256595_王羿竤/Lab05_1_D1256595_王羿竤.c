#include <stdio.h>

struct customer {
    int number;
    char lastname[15];
    char firstname[15];
    char phonenumber[11];
    double balance;
};

int main() {
    struct customer cust;

    printf("Enter customer number:");
    scanf("%d",&cust.number);
    
    printf("Enter last name:");
    scanf("%s",cust.lastname);

    printf("Enter first name:");
    scanf("%s",cust.firstname);

    printf("Enter phone number:");
    scanf("%s",cust.phonenumber);

    printf("Enter balance:");
    scanf("%lf",&cust.balance);

    printf("\nCustomer Details:\n");
    printf("Customer Number:%d\n",cust.number);
    printf("Last Name:%s\n",cust.lastname);
    printf("First Name:%s\n",cust.firstname);
    printf("Phone Number:%s\n",cust.phonenumber);
    printf("Balance:%.2f\n",cust.balance);

    return 0;
}

