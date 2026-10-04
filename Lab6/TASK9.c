#include <stdio.h>
int main(){
    char w[100], r[100];
    int len = 0, i, vowels = 0, cons = 0, pal = 1;
    printf("Enter a word: ");
    scanf("%s", w);
    printf("Original word: %s\n", w);
    while (w[len] != '\0') len++;
    printf("Length: %d\n", len);
    for (i = 0; i < len; i++) r[i] = w[len - 1 - i];
    r[len] = '\0';
    printf("Reversed: %s\n", r);
    for (i = 0; i < len; i++) {
        char a = w[i], b = r[i];
        if (a >= 'A' && a <= 'Z') a += 32;
        if (b >= 'A' && b <= 'Z') b += 32;
        if (a != b) {
			pal = 0; break; 
		}
    }
    printf(pal ? "Palindrome: Yes\n" : "Palindrome: No\n");

    for (i = 0; i < len; i++) {
        char c = w[i];
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c >= 'a' && c <= 'z') {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowels++;
            else cons++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, cons);
    return 0;
}
