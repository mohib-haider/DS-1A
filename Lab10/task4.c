#include <stdio.h>
#include <string.h>
int main(){
    char Name[50];
    int AccNo;
    float Amount;
    FILE *fptr;
    printf("Enter customer name: ");
    scanf(" %[^\n]", Name);
    printf("Enter account number: ");
    scanf("%d", &AccNo);
    printf("Enter withdrawal amount: ");
    scanf("%f", &Amount);
    fptr = fopen("bank_log.txt", "a");
    if (fptr == NULL){
        printf("Error: Could not open file!\n");
        return 1;
    }
    fprintf(fptr, "Name: %s, Account No: %d, Amount: %.2f\n", Name, AccNo, Amount);
    fclose(fptr);
    printf("Transaction saved successfully.\n");
    return 0;
}
