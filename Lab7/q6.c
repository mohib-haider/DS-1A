#include <stdio.h>
int main(){
    int shifts[4][3];
    int new_row[3];
    int target,i,j;
    printf("Enter the production data (3 workstations x 3 shifts):\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Workstation %d, Shift %d: ", i, j + 1);
            scanf("%d", &shifts[i][j]);
        }
    }
    printf("\nWhich row index should the new row go to (0 to 3)? ");
    scanf("%d", &target);
    while (target < 0 || target > 3){
        printf("Invalid! Please enter a number from 0 to 3: ");
        scanf("%d", &target);
    }
    printf("Enter the 3 new production values: ");
    for (j = 0; j < 3; j++){
        scanf("%d", &new_row[j]);
    }
    for (i = 3; i > target; i--){
        for (j = 0; j < 3; j++){
            shifts[i][j] = shifts[i - 1][j];
        }
    }
    for (j = 0; j < 3; j++){
        shifts[target][j] = new_row[j];
    }
    printf("\nUpdated matrix:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            printf("%6d", shifts[i][j]);
        }
        printf("\n");
    }
    return 0;
}
