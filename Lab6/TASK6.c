#include <stdio.h>
int main(){
    int num;
    int even = 0, odd = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    while (num > 0) {
        if ((num % 10) % 2 == 0) even++;
        else odd++;
        num /= 10;
    }
    printf("Even digits: %d\nOdd digits : %d\n", even, odd);
    return 0;
}
