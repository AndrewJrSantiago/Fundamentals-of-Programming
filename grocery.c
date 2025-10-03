#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice, qty;
    float total = 0, payment, change;
    char again;


    const float VEG_PRICE = 54.5;
    const float MILK_PRICE = 90;
    const float SOAP_PRICE = 29.45;
    const float SHAMPOO_PRICE = 140;

    srand(time(0)); 

    do {
        total = 0; 
        printf("\n=====================================\n");
        printf("         MINI GROCERY STORE          \n");
        printf("=====================================\n");
        printf("1. Vegetable (P54.5/kg)\n");
        printf("2. Fruits (P120 - P150/kg)\n");
        printf("3. Milk (P90/pack)\n");
        printf("4. Soap (P29.45/bar)\n");
        printf("5. Shampoo & Conditioner (P140/bottle)\n");
        printf("6. Checkout\n");
        printf("=====================================\n");

        while (1) {
            printf("\nEnter your choice (1-6): ");
            scanf("%d", &choice);

            if (choice == 6) break; 

            printf("Enter quantity: ");
            scanf("%d", &qty);

            switch (choice) {
                case 1:
                    total += qty * VEG_PRICE;
                    printf("%d kg Vegetable added. Subtotal: P%.2f\n", qty, total);
                    break;
                case 2: {
                    int fruit_price = 120 + rand() % 31;
                    total += qty * fruit_price;
                    printf("%d kg Fruits @P%d/kg added. Subtotal: P%.2f\n", qty, fruit_price, total);
                    break;
                }
                case 3:
                    total += qty * MILK_PRICE;
                    printf("%d Milk pack(s) added. Subtotal: P%.2f\n", qty, total);
                    break;
                case 4:
                    total += qty * SOAP_PRICE;
                    printf("%d Soap bar(s) added. Subtotal: P%.2f\n", qty, total);
                    break;
                case 5:
                    total += qty * SHAMPOO_PRICE;
                    printf("%d Shampoo bottle(s) added. Subtotal: P%.2f\n", qty, total);
                    break;
                default:
                    printf("Invalid choice! Please try again.\n");
            }
        }

        printf("\n=====================================\n");
        printf("        RECEIPT SUMMARY              \n");
        printf("=====================================\n");
        printf("Total Purchase: P%.2f\n", total);
        printf("Enter your payment: P");
        scanf("%f", &payment);

        change = payment - total;
        if (change < 0)
            printf("Insufficient payment! You still owe P%.2f\n", -change);
        else
            printf("Your change: P%.2f\n", change);

        printf("\nDo you want to purchase again (Y/N)? ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\nThank you for shopping! Come again!\n");
    return 0;
}
