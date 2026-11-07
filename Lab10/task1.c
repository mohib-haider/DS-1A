#include <stdio.h>
#include <string.h>
int main() {
    char Review[500], Result[600];
    char *Good, *Bad;
    printf("Enter your feedback: ");
    fgets(Review, sizeof(Review), stdin);
    Review[strcspn(Review, "\n")] = '\0';
    printf("Total characters: %lu\n", strlen(Review));
    Good = strstr(Review, "good");
    Bad = strstr(Review, "bad");
    if (Good != NULL){
        printf("Sentiment: Positive\n");
    }
	else if (Bad != NULL){
        printf("Sentiment: Negative\n");
		}	
	else{
        printf("Sentiment: Neutral\n");
    }
	if (Bad != NULL){
        Result[0] = '\0';
        strncat(Result, Review, Bad - Review);
        strcat(Result, "not good");
        strcat(Result, Bad + 3);
        strcpy(Review, Result);
        printf("Updated review: %s\n", Review);
    }
    return 0;
}
