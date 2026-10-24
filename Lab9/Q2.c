#include <stdio.h>
void withdraw(float *balance, float amount){
    if (amount <= *balance) {
        *balance = *balance - amount;
        printf("Withdrawal successful\n");
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *balance, float amount){
    *balance = *balance + amount;
    printf("Updated balance: %.2f\n", *balance);
}

int main(){
    float balance = 100000;
    int choice;
    float amount;
    printf("Enter 1 for debit or 2 for credit: ");
    scanf("%d", &choice);
    printf("Enter amount: ");
    scanf("%f", &amount);
    if (choice == 1){
        withdraw(&balance, amount);
    }
    else if (choice == 2){
        deposit(&balance, amount);
	}	
    printf("Final balance: %.2f\n", balance);
    return 0;
}
