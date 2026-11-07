#include <stdio.h>
#include <string.h>
int main(){
    char Names[10][50], Temp[50];
    int i, j;
    printf("Enter 10 student names:\n");
    for (i = 0; i < 10; i++){
        printf("Name %d: ", i + 1);
        scanf(" %[^\n]", Names[i]);
    }
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9 - i; j++) {
            if (strcmp(Names[j], Names[j + 1]) > 0) {
                strcpy(Temp, Names[j]);
                strcpy(Names[j], Names[j + 1]);
                strcpy(Names[j + 1], Temp);
            }
        }
    }
    printf("\nSorted list:\n");
    for (i = 0; i < 10; i++)
        printf("%d. %s\n", i + 1, Names[i]);
    return 0;
}
