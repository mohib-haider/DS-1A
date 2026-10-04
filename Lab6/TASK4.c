#include <stdio.h>
int main(){
    int num, temp, rev = 0;
    printf("Enter book code: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == num) printf("%d is a palindrome: valid code\n", num);
    else printf("%d is not a palindrome: invalid code\n", num);
    return 0;
}
