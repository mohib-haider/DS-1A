#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter the 3 Numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if ((num1 > num2) && (num1 > num3) && (num2 != num3)){
    printf("Num1 is the largest");
    }
    else if ((num2 > num1) && (num2 > num3) && (num1 != num3)){
    printf("Num2 is the largest");
    }
    else if ((num3> num2) && (num1 < num3) && (num1 != num2)) {
        printf("Num3 is the largest");
    }
    else if ((num1 == num2) && (num2 == num3)){
    	printf("They all are equal");
	}
	else if (num1 == num2){
		if (num1 > num3){
			printf("Num1 and Num2 are equal but Num3 is the lowest");
		}
		else{
			printf("Num1 and Num2 are equal but Num3 is the largest");
		}
		}
		
	else if (num1 == num3){
	if (num1 > num2){
			printf("Num1 and Num3 are equal but Num2 is the lowest");}
		else{
			printf("Num1 and Num3 are equal but Num2 is the largest");
		}
		}
		

	else if (num3 == num2){
		if (num1> num3){
			printf("Num3 and Num2 are equal but Num1 is the lowest");}
		else{
			printf("Num3 and Num2 are equal but Num1 is the largest");
		}
		}
		
	


    return 0;
}
        
        
