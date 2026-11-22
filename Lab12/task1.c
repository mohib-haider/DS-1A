#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    printf("Enter number of book categories: ");
    scanf("%d", &n);
    if (n <= 0){
        printf("Invalid number of categories.\n");
        return 1;
    }

    int *stock = (int *)malloc(n * sizeof(int));
    if (stock == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++){
        printf("Enter stock for category %d: ", i);
        scanf("%d", &stock[i]);
    }

    int total = 0, minIndex = 0;
    for (i = 0; i < n; i++) {
        total += stock[i];
        if (stock[i] < stock[minIndex])
            minIndex = i;
    }

    printf("\nTotal stock: %d\n", total);
    printf("Average stock per category: %.2f\n", (float)total / n);
    printf("Category with lowest stock: %d (stock = %d)\n", minIndex, stock[minIndex]);

    int idx, newStock;
    printf("\nEnter category index to update (0 to %d): ", n - 1);
    scanf("%d", &idx);
    if (idx < 0 || idx >= n){
        printf("Invalid category index.\n");
    } else {
        printf("Enter new stock: ");
        scanf("%d", &newStock);
        stock[idx] = newStock;
    }

    total = 0;
    minIndex = 0;
    for (i = 0; i < n; i++) {
        total += stock[i];
        if (stock[i] < stock[minIndex])
            minIndex = i;
    }

    printf("\nUpdated Stock Levels\n");
    for (i = 0; i < n; i++)
        printf("Category %d: %d\n", i, stock[i]);
    printf("Total stock: %d\n", total);
    printf("Average stock per category: %.2f\n", (float)total / n);
    printf("Category with lowest stock: %d (stock = %d)\n", minIndex, stock[minIndex]);

    free(stock);
    stock = NULL;
    return 0;
}
