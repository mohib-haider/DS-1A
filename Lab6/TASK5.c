#include <stdio.h>
int main(){
    int n, i;
    int c = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        c = c * 2 * (2 * i - 1) / (i + 1);
    }
    printf("Catalan number C(%d) = %d\n", n, c);
    return 0;
}
