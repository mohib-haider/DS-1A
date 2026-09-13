#include <stdio.h>

int main() {
	
    int total, missing, duplicate;
    float missingPct, duplicatePct;
    printf("Enter Total Number of Records: ");
    scanf("%d", &total);
    printf("Enter Number of Missing Records: ");
    scanf("%d", &missing);
    printf("Enter Number of Duplicate Records: ");
    scanf("%d", &duplicate);
    if (total <= 0) {
        printf("Invalid Dataset");
        return 0;
    }
    missingPct = ((float)missing / total) * 100;
    duplicatePct = ((float)duplicate / total) * 100;

    if (missingPct > 30) {
        printf("Poor Quality Dataset");
    }
    else if (duplicatePct > 20) {
        printf("Dataset Requires Cleaning");
    }
    else {
        printf("Dataset Ready for Training");
    }
    return 0;
}
