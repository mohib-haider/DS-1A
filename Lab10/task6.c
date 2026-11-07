#include <stdio.h>
#include <string.h>
int main(){
    char Username[50], Password[50];
    char FileUser[50], FilePass[50];
    FILE *fptr;
    printf("Enter username: ");
    scanf("%s", Username);
    printf("Enter password: ");
    scanf("%s", Password);
    fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }
    fscanf(fptr, "%s %s", FileUser, FilePass);
    if (strcmp(Password, FilePass) == 0)
        printf("Access Granted!\n");
    else
        printf("Access Denied!\n");
    fclose(fptr);
    return 0;
}
