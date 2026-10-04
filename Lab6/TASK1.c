#include <stdio.h>
int main(){
    int pin, sum = 0;
    printf("Enter 4 Digit PIN: ");
    scanf("%d", &pin);
    while (pin > 0) {
        sum += pin % 10;
        pin /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    if (sum > 10) printf("Strong PIN\n");
    else printf("Weak PIN\n");
    return 0;
}
