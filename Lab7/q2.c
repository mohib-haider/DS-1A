#include <stdio.h>
int main(){
    char logs[9][30];
    int i, j;
    int uppercase_count = 0;
    printf("Enter 3 log entries in this format:\n");
    printf("username,status,time   (example: Admin_User,Access Granted,10:45AM)\n\n");
    for (i = 0; i < 3; i++){
        printf("Entry %d: ", i + 1);
        scanf(" %[^,],%[^,],%[^\n]", logs[i * 3], logs[i * 3 + 1], logs[i * 3 + 2]);
    }
    printf("\nParsed entries:\n");
    for (i = 0; i < 3; i++){
        printf("Entry %d -> User: %s | Status: %s | Time: %s\n",
               i + 1, logs[i * 3], logs[i * 3 + 1], logs[i * 3 + 2]);
    }
    for (i = 0; i < 9; i++){
        for (j = 0; logs[i][j] != '\0'; j++){
            if (logs[i][j] >= 'A' && logs[i][j] <= 'Z'){
                uppercase_count++;
            }
        }
    }
    printf("\nTotal uppercase letters: %d\n", uppercase_count);
    return 0;
}
