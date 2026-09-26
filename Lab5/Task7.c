#include <stdio.h>
int main(){
    float confidence, requiredThreshold;
    printf("Enter Model Confidence (0-100): ");
    scanf("%f", &confidence);
    printf("Enter Required Confidence Threshold (0-100): ");
    scanf("%f", &requiredThreshold);
    if (confidence >= 90)
    {
	
        printf("Confidence Level: Very High\n");
    }
    else if (confidence >= 75)
    {
        printf("Confidence Level: High\n");
    }
    else if (confidence >= 50)
    {
        printf("Confidence Level: Moderate\n");
    }
    else
    {
        printf("Confidence Level: Low\n");
    }
    if (confidence >= requiredThreshold && confidence >= 50)
    {
        printf("Prediction: Accepted\n");
    }
    else
    {
        printf("Prediction: Not Accepted\n");
    }

    return 0;
}
