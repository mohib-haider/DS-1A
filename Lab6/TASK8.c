#include <stdio.h>
#define MAX 20
int main() {
    int a[MAX], n = 8, i, max, min, key, found = -1, pos, val;
    printf("Enter 8 elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Array: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    max = min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Largest = %d, Smallest = %d\n", max, min);

    printf("Enter number to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key) { found = i; break; }
    if (found != -1) printf("%d found at index %d\n", key, found);
    else printf("%d not found\n", key);

    printf("Enter index and value to insert: ");
    scanf("%d %d", &pos, &val);
    if (pos < 0 || pos > n || n >= MAX) printf("Invalid insert position\n");
    else {
        for (i = n; i > pos; i--) a[i] = a[i - 1];
        a[pos] = val;
        n++;
    }
    printf("Enter index to delete: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) printf("Invalid delete position\n");
    else {
        for (i = pos; i < n - 1; i++) a[i] = a[i + 1];
        n--;
    }
    printf("Final array: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
