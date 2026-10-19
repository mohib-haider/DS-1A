#include <stdio.h>
int main(){
    char word_grid[3][100];
    char longest_word[100];
    int i, k, m;
    int col,start,length;
    int max_length = 0;
    int max_row = 0;
    int max_col = 0;
    printf("Enter 3 lines, each with 3 words separated by spaces.\n");
    for (i = 0; i < 3; i++){
        printf("Row %d: ", i + 1);
        scanf(" %[^\n]", word_grid[i]);
    }
    for (i = 0; i < 3; i++){
        k = 0;
        col = 0;
        while (word_grid[i][k] != '\0'){
            while (word_grid[i][k] == ' '){
                k++;
            }
            if (word_grid[i][k] == '\0'){
                break;
            }
            start = k;
            length = 0;
            while (word_grid[i][k] != ' ' && word_grid[i][k] != '\0'){
                length++;
                k++;
            }
            if (length > max_length){
                max_length = length;
                max_row = i;
                max_col = col;
                for (m = 0; m < length; m++){
                    longest_word[m] = word_grid[i][start + m];
                }
                longest_word[length] = '\0';
            }
            col++;
        }
    }
    printf("\nLongest word: %s (%d letters)\n", longest_word, max_length);
    printf("Found at Row Index i = %d, Column Index j = %d\n", max_row, max_col);
    return 0;
}
