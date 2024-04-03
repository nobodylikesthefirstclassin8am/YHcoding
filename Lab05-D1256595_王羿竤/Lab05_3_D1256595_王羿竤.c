#include <stdio.h>
#define MAX_EMPLOYEES 100

struct employee{
    int id;
    char lastname[15];
    char firstname[15];
    char gender;
    int age;
    float salary;
};

struct employee findHighestPaid(struct employee employees[],int n);

int main() {
    struct employee employees[MAX_EMPLOYEES];
    int numemployees;
    int i;

    printf("Enter the number of employees: ");
    scanf("%d", &numemployees);

    if(numemployees<=0 || numemployees>MAX_EMPLOYEES){
        printf("Invalid number of employees.\n");
        return 1;
    }

    printf("Enter employee details:\n");
    for(i = 0; i < numemployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Last Name: ");
        scanf("%s", employees[i].lastname);
        printf("First Name: ");
        scanf("%s", employees[i].firstname);
        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Records:\n");
    for(i=0;i<numemployees;i++){
        printf("ID: %d, Name: %s %s, Gender: %c, Age: %d, Salary: %.2f\n",
               employees[i].id,employees[i].firstname,employees[i].lastname,
               employees[i].gender,employees[i].age,employees[i].salary);
    }

    struct employee highestPaid=findHighestPaid(employees,numemployees);
    printf("\nHighest Paid Employee:\n");
    printf("ID: %d, Name: %s %s, Gender: %c, Age: %d, Salary: %.2f\n",
           highestPaid.id,highestPaid.firstname,highestPaid.lastname,
           highestPaid.gender,highestPaid.age,highestPaid.salary);

    return 0;
}

struct employee findHighestPaid(struct employee employees[],int n) {
    struct employee highestPaid=employees[0];
    int i;

    for(i=1;i<n;i++){
        if(employees[i].salary>highestPaid.salary){
            highestPaid=employees[i];
        }
    }

    return highestPaid;
}

