#include <stdio.h>

int main() {
    int score;
    printf("Enter Confidence Score: ");
    scanf("%d", &score);

    if ((score < 0) || (score > 100)) {
        printf("Invalid Score");
    }
    else if (score >= 0 && score < 50) {
        printf("Low Confidence");
    }
    else if (score >= 50 && score < 80) {
        printf("Moderate Confidence");
    }
    else if (score >= 80 && score <= 100) {
        printf("High Confidence");
    }
    return 0;
}
