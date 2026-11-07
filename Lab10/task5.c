#include <stdio.h>
int main(){
    int RollNo;
    char Name[50];
    float Marks;
    FILE *fptr;
    fptr = fopen("marks.txt", "r");
    if (fptr == NULL){
        printf("Error: File Not Found!\n");
        return 1;
    }
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    while (fscanf(fptr, "%d %s %f", &RollNo, Name, &Marks) != EOF){
        printf("%-10d %-20s %-10.2f\n", RollNo, Name, Marks);
    }
    fclose(fptr);
    return 0;
}
