#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int containsDigit(char *str){
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9')
            return 1;
        str++;
    }
    return 0;
}

int main(){
    int n,i,j;
    printf("Enter number of usernames: ");
    scanf("%d", &n);
    if (n <= 0){
        printf("Invalid number of usernames.\n");
        return 1;
    }

    char **users = (char **)malloc(n * sizeof(char *));
    if (users == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    char buffer[200];
    for (i = 0; i < n; i++){
        printf("Enter username %d: ", i + 1);
        scanf("%199s", buffer);
        users[i] = (char *)malloc(strlen(buffer) + 1);
        if (users[i] == NULL) {
            printf("Memory allocation failed.\n");
            for (j = 0; j < i; j++)
                free(users[j]);
            free(users);
            return 1;
        }
        strcpy(users[i], buffer);
    }

    int validCount = 0;
    for (i = 0; i < n; i++){
        if (containsDigit(users[i])){
            free(users[i]);
        } else {
            users[validCount++] = users[i];
        }
    }

    printf("\nValid usernames (alphabetic only):\n");
    if (validCount == 0)
        printf("None\n");
    for (i = 0; i < validCount; i++)
        printf("%s\n", users[i]);

    for (i = 0; i < validCount; i++)
        free(users[i]);
    free(users);
    users = NULL;
    return 0;
}
