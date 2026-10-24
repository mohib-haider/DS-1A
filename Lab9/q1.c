#include <stdio.h>
float calculateDiscount(float amount, char type){
    float rate = 0;
    if (type == 'P') rate = 0.20;
    else if (type == 'G') rate = 0.10;
    else if (type == 'S') rate = 0.05;
    if (amount > 10000){
	rate = rate + 0.02;
	}
	return amount * rate;
}

float calculateFinalBill(float discounted){
    float total = discounted + discounted * 0.15;
    if (discounted <= 5000) total = total + 300;
    return total;
}

int main(){
    float amount, discount, discounted, total;
    char type;
    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &type);
    printf("Enter shopping amount: ");
    scanf("%f", &amount);
    discount = calculateDiscount(amount, type);
    discounted = amount - discount;
    total = calculateFinalBill(discounted);
    printf("Discount: %.2f\n", discount);
    printf("Discounted amount: %.2f\n", discounted);
    printf("Final payable amount: %.2f\n", total);
    return 0;
}
