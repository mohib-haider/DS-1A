#include <stdio.h>
int main(){
    char student_names[3][50];
    int marks[3][3];   
    int i, j;
    int sum;
    float average;
    for (i = 0; i < 3; i++){
        printf("Enter full name of student %d: ", i + 1);
        scanf(" %[^\n]", student_names[i]);
    }
    for (i = 0; i < 3; i++){
        printf("\nEnter marks for %s\n", student_names[i]);

        for (j = 0; j < 3; j++){
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\n%-25s %s\n", "Name", "Average");
    for (i = 0; i < 3; i++){
        sum = 0;
        for (j = 0; j < 3; j++){
            sum = sum + marks[i][j];
        }
        average = sum / 3.0;
        printf("%-25s %.2f\n", student_names[i], average);
    }
    return 0;
}
