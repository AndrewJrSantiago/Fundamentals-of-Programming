#include <stdio.h>

int main() {
    char name[50];
    float salary, bonus;

 
    printf("Enter employee's name: ");
    fgets(name, sizeof(name), stdin);


    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    if (salary <= 10000) {
        bonus = 0.8 * salary;
    } else {
        bonus = 10000;
    }

    printf("\nEmployee Name: %s", name);
    printf("Bonus: %.2f pesos\n", bonus);

    return 0;
}