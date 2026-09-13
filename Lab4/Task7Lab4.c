#include <stdio.h>

int main() {
	
    float DataUsed, PricePerGB;
    float BasicCost, DiscountPct, DiscountAmount, FinalCost;
    printf("Enter Data Used (Gb): ");
    scanf("%f", &DataUsed);
    printf("Enter Price per GB: ");
    scanf("%f", &PricePerGB);
    BasicCost = DataUsed * PricePerGB;
    if (DataUsed < 50) {
        DiscountPct = 0;
    }
    else if (DataUsed <= 99) {
        DiscountPct = 5;
    }
    else if (DataUsed <= 199) {
        DiscountPct = 10;
    }
    else {
        DiscountPct = 15;
    }

    DiscountAmount = BasicCost * (DiscountPct / 100);
    FinalCost = BasicCost - DiscountAmount;
    printf("\nBasic Cost: %.2f\n", BasicCost);
    printf("Discount Amount: %.2f\n", DiscountAmount);
    printf("Final Cost: %.2f\n", FinalCost);
    return 0;
}
