#include <stdio.h>
int main(){
    char sentences[3][100];
    int i, j,vowel_count;
    char ch;
    printf("Enter 3 sentences separated by semicolons (;)\n");
    printf("Example: Learn C programming; Nested loops are powerful; Practice daily\n\n");
    for (i = 0; i < 3; i++){
        sentences[i][0] = '\0';
        scanf(" %[^;]%*c", sentences[i]);
    }
    printf("Vowel count n");
    for (i = 0; i < 3; i++){
        vowel_count = 0;
        for (j = 0; sentences[i][j] != '\0'; j++){
            ch = sentences[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                vowel_count++;
            }
        }
        printf("Sentence %d: \"%s\"\n", i + 1, sentences[i]);
        printf("Vowels: %d\n", vowel_count);
    }
    return 0;
}
