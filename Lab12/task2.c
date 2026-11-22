#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

int main(){
    int n,i;
    printf("Enter number of feedback entries: ");
    scanf("%d", &n);
    getchar();
    if (n <= 0){
        printf("Invalid number of entries.\n");
        return 1;
    }

    char **feedback = NULL;
    int count = 0;
    char buffer[BUFFER_SIZE];

    for (i = 0; i < n; i++){
        printf("Enter feedback %d: ", i + 1);
        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL)
            break;
        buffer[strcspn(buffer, "\n")] = '\0';

        char **temp = (char **)realloc(feedback, (count + 1) * sizeof(char *));
        if (temp == NULL){
            printf("Memory allocation failed.\n");
            break;
        }
        feedback = temp;

        feedback[count] = (char *)malloc(strlen(buffer) + 1);
        if (feedback[count] == NULL){
            printf("Memory allocation failed.\n");
            break;
        }
        strcpy(feedback[count], buffer);
        count++;
    }

    if (count == 0){
        free(feedback);
        return 1;
    }

    int totalChars = 0;
    int longestIndex = 0;
    int longestLen = 0;

    for (i = 0; i < count; i++){
        char *p = feedback[i];
        int len = 0;
        while (*p != '\0'){
            len++;
            p++;
        }
        totalChars += len;
        if (len > longestLen){
            longestLen = len;
            longestIndex = i;
        }
    }

    printf("\nAll Feedback Entries\n");
    for (i = 0; i < count; i++)
        printf("%d. %s\n", i + 1, feedback[i]);

    printf("\nTotal characters: %d\n", totalChars);
    printf("Longest feedback (%d characters): %s\n", longestLen, feedback[longestIndex]);

    for (i = 0; i < count; i++)
        free(feedback[i]);
    free(feedback);
    feedback = NULL;
    return 0;
}
