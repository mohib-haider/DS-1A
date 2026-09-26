#include <stdio.h>
#include <math.h>
int main(){
    float Accuracy, Confidence, ModelScore;
    int DataSetSize;
    int UserRole, ModelStatus;
    int Permission;
    printf("AI DECISION ENGINE\n");
    printf("Enter Model Accuracy (0-100): ");
    scanf("%f", &Accuracy);
    printf("Enter Model Confidence (0-100): ");
    scanf("%f", &Confidence);
    printf("Enter Dataset Size: ");
    scanf("%d", &DataSetSize);
    printf("\nSelect User Role:\n");
    printf("1.Admin\n");
    printf("2.Developer\n");
    printf("3.Researcher\n");
    printf("Enter Role: ");
    scanf("%d", &UserRole);
    printf("Select Model Status:\n");
    printf("1.Ready\n");
    printf("2.Testing\n");
    printf("3.Training\n");
    printf("Enter Status: ");
    scanf("%d", &ModelStatus);
    printf("\nEnter Permission Value:\n");
    printf("View = 1\n");
    printf("Train = 2\n");
    printf("Test = 4\n");
    printf("Deploy = 8\n");
    printf("Enter Permission: ");
    scanf("%d", &Permission);
    ModelScore = (Accuracy + Confidence) / 2;
    printf("User Role: ");
    switch (UserRole)
    {
        case 1:
            printf("Admin\n");
            break;

        case 2:
            printf("Developer\n");
            break;

        case 3:
            printf("Researcher\n");
            break;

        default:
            printf("Invalid Role\n");
    }
    printf("Model Status: ");

    switch (ModelStatus)
    {
        case 1:
            printf("Ready\n");
            break;

        case 2:
            printf("Testing\n");
            break;

        case 3:
            printf("Training\n");
            break;

        default:
            printf("Invalid Status\n");
    }

    printf("Accuracy: %.2f%%\n", Accuracy);
    printf("Confidence: %.2f%%\n", Confidence);
    printf("Dataset Size: %d\n", DataSetSize);
    printf("Model Score: %.2f\n", ModelScore);
    if (Permission & 1)
        printf("View: Allowed\n");
    else
        printf("View: Not Allowed\n");

    if (Permission & 2)
        printf("Train: Allowed\n");
    else
        printf("Train: Not Allowed\n");

    if (Permission & 4)
        printf("Test: Allowed\n");
    else
        printf("Test: Not Allowed\n");

    if (Permission & 8)
        printf("Deploy: Allowed\n");
    else
        printf("Deploy: Not Allowed\n");
    if (Accuracy >= 80)
    {
        if (Confidence >= 75)
        {
            if (DataSetSize >= 1000)
            {
                if (ModelStatus == 1)
                {
                    if (Permission & 8)
                    {
                        printf("Deployment Ready: YES\n");
                    }
                    else
                    {
                        printf("Deployment Ready: NO - No Deployment Permission\n");
                    }
                }
                else
                {
                    printf("Deployment Ready: NO - Model is not Ready\n");
                }
            }
            else
            {
                printf("Deployment Ready: NO - Dataset is too small\n");
            }
        }
        else
        {
            printf("Deployment Ready: NO - Confidence is too low\n");
        }
    }
    else
    {
        printf("Deployment Ready: NO - Accuracy is too low\n");
    }
    printf("Model Quality: %s\n",
           ModelScore >= 80 ? "Good" : "Needs Improvement");
    printf("Size of Accuracy variable: %zu bytes\n", sizeof(Accuracy));
    printf("Size of Confidence variable: %zu bytes\n", sizeof(Confidence));
    printf("Size of Dataset variable: %zu bytes\n", sizeof(DataSetSize));
    printf("Rounded Model Score: %.0f\n", round(ModelScore));

    return 0;
}
