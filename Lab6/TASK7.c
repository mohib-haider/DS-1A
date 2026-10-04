#include <stdio.h>
int main() {
    int num, row, col, level;
    printf("Enter n (rows in upper half): ");
    scanf("%d", &num);
    for (row = 1; row <= 2 * num - 1; row++) {
        if (row <= num)level = row;
        else level = 2 * num - row;
        for (col = 1; col <= num - level; col++) printf(" ");
        for (col = 1; col <= 2 * level - 1; col++) {
            if (col == 1 || col == 2 * level - 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
