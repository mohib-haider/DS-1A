#include <stdio.h>

int main() {
    float accuracy;
    int latency, approved;
    printf("Enter Model Accuracy(%%): ");
    scanf("%f", &accuracy);
    printf("Enter Prediction Latency (milliseconds): ");
    scanf("%d", &latency);
    printf("Enter Approval Status (0 = Not Approved, 1 = Approved): ");
    scanf("%d", &approved);

    int CanDeploy = 1;
    if (accuracy < 90) {
        printf("Accuracy too Low\n");
        CanDeploy = 0;
    }
    if (latency > 100) {
        printf("Latency too High\n");
        CanDeploy = 0;
    }
    if (approved == 0) {
        printf("Model not Approved\n");
        CanDeploy = 0;
    }
    if (CanDeploy) {
        printf("Model can be Deployed");
    }
    else {
        printf("Model cannot be Deployed");
    }
    return 0;
}
