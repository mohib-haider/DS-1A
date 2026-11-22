#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    printf("Enter number of movie categories: ");
    scanf("%d", &n);
    if (n <= 0){
        printf("Invalid number of categories.\n");
        return 1;
    }

    int *ratings = (int *)malloc(n * sizeof(int));
    if (ratings == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++){
        printf("Enter rating count for category %d: ", i);
        scanf("%d", &ratings[i]);
    }

    int total = 0, maxIndex = 0;
    for (i = 0; i < n; i++){
        total += ratings[i];
        if (ratings[i] > ratings[maxIndex])
            maxIndex = i;
    }

    printf("\nTotal ratings: %d\n", total);
    printf("Average ratings per category: %.2f\n", (float)total / n);
    printf("Category with highest rating count: %d (count = %d)\n", maxIndex, ratings[maxIndex]);

    int idx, newCount;
    printf("\nEnter category index to update (0 to %d): ", n - 1);
    scanf("%d", &idx);
    if (idx < 0 || idx >= n){
        printf("Invalid category index.\n");
    } else {
        printf("Enter new rating count: ");
        scanf("%d", &newCount);
        ratings[idx] = newCount;
    }

    total = 0;
    maxIndex = 0;
    for (i = 0; i < n; i++){
        total += ratings[i];
        if (ratings[i] > ratings[maxIndex])
            maxIndex = i;
    }

    printf("\nUpdated Rating Counts\n");
    for (i = 0; i < n; i++)
        printf("Category %d: %d\n", i, ratings[i]);
    printf("Total ratings: %d\n", total);
    printf("Average ratings per category: %.2f\n", (float)total / n);
    printf("Category with highest rating count: %d (count = %d)\n", maxIndex, ratings[maxIndex]);

    free(ratings);
    ratings = NULL;
    return 0;
}
