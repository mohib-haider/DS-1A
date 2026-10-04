#include <stdio.h>
int main(){
    int status;
    int present = 0;
    int absent = 0;
    int i;
    for (i = 1; i <= 15; i++){
        printf("Enter 1 for Present and 0 for Absent (Student %d): ", i);
        scanf("%d", &status);
        if (status == 1)
            present++;
        else
            absent++;
    }
    printf("\nTotal Present = %d\n", present);
    printf("Total Absent = %d\n", absent);
    return 0;
}
