#include <stdio.h>

#define SIZE 5

struct Item{
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main(){
    struct Item items[SIZE];
    float totalValue = 0;
    int searchId, i, found = 0;

    for (i = 0; i < SIZE; i++){
        printf("Enter details for item %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &items[i].id);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Unit Price: ");
        scanf("%f", &items[i].unitPrice);
        totalValue += items[i].quantity * items[i].unitPrice;
    }

    printf("\nTotal Inventory Value: %.2f\n", totalValue);
    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchId);

    for ( i = 0; i < SIZE; i++){
        if (items[i].id == searchId){
            printf("\nItem Found\n");
            printf("ID: %d\n", items[i].id);
            printf("Name: %s\n", items[i].name);
            printf("Quantity: %d\n", items[i].quantity);
            printf("Unit Price: %.2f\n", items[i].unitPrice);
            found = 1;
            break;
        }
    }

    if (!found){
        printf("Item with ID %d not found.\n", searchId);
	}
    return 0;
}
