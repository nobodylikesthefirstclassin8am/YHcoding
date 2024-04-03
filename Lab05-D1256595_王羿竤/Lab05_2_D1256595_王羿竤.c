#include <stdio.h>

struct employee{
    int id;
    char lastname[15];
    char firstname[15];
    char gender;
    int age;
    float salary;
};

int main(){
    const int MAX_EMPLOYEES=100;

    struct employee employees[MAX_EMPLOYEES];

    int numEmployees,i;

    printf("Enter the number of employees:");
    scanf("%d",&numEmployees);

    for(i=0;i<numEmployees;++i){
        printf("\nEnter details for employee %d:\n",i+1);

        printf("ID:");
        scanf("%d",&employees[i].id);

        printf("Last Name:");
        scanf("%s", employees[i].lastname);

        printf("First Name:");
        scanf("%s", employees[i].firstname);

        printf("Gender (M/F):");
        scanf(" %c",&employees[i].gender);

        printf("Age:");
        scanf("%d",&employees[i].age);

        printf("Salary:");
        scanf("%f",&employees[i].salary);
    }

    printf("\nEmployee Records:\n");
    printf("ID\tLast Name\tFirst Name\tGender\tAge\tSalary\n");
    for(i=0;i<numEmployees;++i){
        printf("%d\t%s\t\t%s\t\t%c\t%d\t%.2f\n",
               employees[i].id,
               employees[i].lastname,
               employees[i].firstname,
               employees[i].gender,
               employees[i].age,
               employees[i].salary);
    }

    return 0;
}

