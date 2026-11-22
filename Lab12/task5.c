#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 200

int getCategory(char c){
    if (c >= 'A' && c <= 'Z')
        return 0;
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= '0' && c <= '9')
        return 2;
    return 3;
}

float similarity(char *pattern, char *attempt){
	int i;
    int pLen = strlen(pattern);
    int aLen = strlen(attempt);
    int maxLen = pLen > aLen ? pLen : aLen;
    int minLen = pLen < aLen ? pLen : aLen;
    int matches = 0;

    if (maxLen == 0)
        return 100.0f;

    for (i = 0; i < minLen; i++) {
        if (getCategory(pattern[i]) == getCategory(attempt[i]))
            matches++;
    }
    return ((float)matches / maxLen) * 100.0f;
}

int main(){
    int n,i,j;
    printf("Enter number of participants: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of participants.\n");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    printf("Enter password pattern: ");
    scanf("%199s", buffer);
    char *pattern = (char *)malloc(strlen(buffer) + 1);
    if (pattern == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(pattern, buffer);

    char **passwords = (char **)malloc(n * sizeof(char *));
    float *scores = (float *)malloc(n * sizeof(float));
    if (passwords == NULL || scores == NULL) {
        printf("Memory allocation failed.\n");
        free(pattern);
        free(passwords);
        free(scores);
        return 1;
    }

    for (i = 0; i < n; i++){
        printf("Enter password attempt for participant %d: ", i + 1);
        scanf("%199s", buffer);
        passwords[i] = (char *)malloc(strlen(buffer) + 1);
        if (passwords[i] == NULL) {
            printf("Memory allocation failed.\n");
            for (j = 0; j < i; j++)
                free(passwords[j]);
            free(passwords);
            free(scores);
            free(pattern);
            return 1;
        }
        strcpy(passwords[i], buffer);
        scores[i] = similarity(pattern, passwords[i]);
    }

    int best = 0;
    printf("\nParticipant Results\n");
    for (i = 0; i < n; i++){
        printf("Participant %d: %s -> %.2f%%\n", i + 1, passwords[i], scores[i]);
        if (scores[i] > scores[best])
            best = i;
    }

    printf("\nHighest similarity: Participant %d, password %s (%.2f%%)\n",
           best + 1, passwords[best], scores[best]);

    for (i = 0; i < n; i++)
        free(passwords[i]);
    free(passwords);
    free(scores);
    free(pattern);
    return 0;
}
