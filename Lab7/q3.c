#include <stdio.h>
int main(){
    char secret_messages[3][100];
    int i, j;
    int spaces, words, ch;
    printf("Enter 3 messages (use only CAPITAL letters and spaces).\n");
    printf("Anything after the first invalid character will be cut off.\n\n");
    for (i = 0; i < 3; i++){
        secret_messages[i][0] = '\0';
        printf("Message %d: ", i + 1);
        scanf("%[A-Z ]", secret_messages[i]);
        ch = getchar();
		while (ch != '\n' && ch != EOF){
    	ch = getchar();
		}
    }
    printf("Results\n");
    for (i = 0; i < 3; i++){
        spaces = 0;
        words = 0;
        for (j = 0; secret_messages[i][j] != '\0'; j++){
            if (secret_messages[i][j] == ' '){
                spaces++;
            }
            else{
                if (j == 0 || secret_messages[i][j - 1] == ' '){
                    words++;
                }
            }
        }

        printf("Message %d: \"%s\"\n", i + 1, secret_messages[i]);
        printf("Spaces: %d, Words: %d\n", spaces, words);
    }
    return 0;
}
