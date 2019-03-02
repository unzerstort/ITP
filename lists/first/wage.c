#include<stdio.h>

// a program that reads an employee's number, their worked hours, the value they receive per hour and calculates their respective wage.

int main (void){
        int employee, whours;
        double valhours, salary;

        printf("Insert the employee's number: ");
        scanf("%d", &employee);
        printf("Insert the employee's worked hours : ");
        scanf("%d", &whours);
        printf("Insert the employee's value received per hour: ");
        scanf("%lf", &valhours);

        salary = whours * valhours;

        printf("NUMBER = %d\n", employee);
        printf("SALARY = U$ %.2lf\n", salary);

        return 0;
}


