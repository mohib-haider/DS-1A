#include <stdio.h>

int main() {
	
    int obstacle, person;
    float battery;
    printf("Enter Obstacle Detected (1=Yes, 0=No): ");
    scanf("%d", &obstacle);
    printf("Enter Person Detected (1=Yes, 0=No): ");
    scanf("%d", &person);
    printf("Enter Battery Percentage: ");
    scanf("%f", &battery);
    if (obstacle == 1) {
        if (person == 1) {
            printf("Emergency Stop");
        }
        else {
            printf("Change Direction");
        }
    }
    else {
        if (battery < 20) {
            printf("Return to Charging Station");
        }
        else {
            printf("Continue Moving");
        }
    }
    return 0;
}
