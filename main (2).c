#include <stdio.h>

int main()
{
char name[100]; char Food[100]; char Place[100]; char Phone[100]; char Email[100];
char Gender[100]; char Password[100]; char Nationality[100];
int Age;

printf("Enter your name: ");
scanf("%s", name);

printf("Enter your Password: ");
scanf("%s", Password);

printf("Enter your Age:");
scanf("%d", &Age);

printf("What is your Favorite food?: ");
scanf("%s", Food);

printf("favorite Place?:");
scanf("%s", Place);

printf("Enter your Phone number:");
scanf("%s", Phone);

printf("Email Address:");
scanf("%s", Email);

printf("Gender: ");
scanf("%s", Gender);

printf("Nationality: ");
scanf("%s", Nationality);








printf("Username: %s\n", name);
printf("Password: %s\n", Password);
printf("Age: %d\n", Age);
printf("Favorite food: %s\n", Food);
printf("Favorite place: %s\n", Place);
printf("Phone number: %s\n", Phone);
printf("Email address: %s\n", Email);
printf("Gender: %s\n", Gender);
printf("Nationality: %s\n", Nationality);


return 0;
}
