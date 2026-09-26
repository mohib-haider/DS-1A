#include <stdio.h>
int main(){
    int age, creditScore, ExistingLoan;
    float income;
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Monthly Income: ");
    scanf("%f", &income);
    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);
    printf("Do you have an Existing Loan? (1 = Yes, 0 = No): ");
    scanf("%d", &ExistingLoan);

    if (age >= 21)
    {
        if (income >= 100000 && creditScore >= 750 && ExistingLoan == 0)
        {
            printf("High Approval Chance");
        }
        else if (income >= 75000 && creditScore >= 650 && ExistingLoan == 1)
        {
            printf("Manual Review");
        }
        else if (income >= 50000 && creditScore >= 600)
        {
            printf("Possibly Eligible");
        }
        else
        {
            printf("Rejected");
        }
    }
    else
    {
        printf("Rejected");
    }

    return 0;
}
