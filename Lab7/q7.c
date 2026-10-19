#include <stdio.h>
int main(){
    float sensor_data[3][4];
    int bad_col,r,c;
    printf("Enter the temperature readings:\n");
    for (r = 0; r < 3; r++){
        for (c = 0; c < 4; c++){
            printf("Day %d, Sensor %d: ", r + 1, c);
            scanf("%f", &sensor_data[r][c]);
        }
    }
    printf("\nWhich sensor is faulty (column 0 to 3)? ");
    scanf("%d", &bad_col);
    while (bad_col < 0 || bad_col > 3){
        printf("Invalid! Please enter a number from 0 to 3: ");
        scanf("%d", &bad_col);
    }
    for (r = 0; r < 3; r++){
        for (c = bad_col; c < 3; c++){
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }
    printf("\nUpdated readings (3x3):\n");
    for (r = 0; r < 3; r++){
        for (c = 0; c < 3; c++){
            printf("%8.2f", sensor_data[r][c]);
        }
        printf("\n");
    }
    return 0;
}
