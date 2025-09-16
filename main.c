#include <stdio.h>

int main()
{
    int grade;
    
    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);
    
    switch (grade / 10) {
        case 10: 
        case 9:
            printf("Equivalent Grade: A");
            break;
        case 8:
            printf("Equivalent Grade: B");
            break;
        case 7:
        case 6:
            printf("Equivalent Grade: C");
            break;
        default:
            printf("Equivalent Grade: Failed");
            break;
    }

    return 0;
}