#include <stdio.h>
int main(){
    float Confidence;
    int UserType;
    printf("Enter Face Recognition Confidence (0-100): ");
    scanf("%f", &Confidence);
    printf("Enter User Type (1 = Authorized, 0 = Unauthorized): ");
    scanf("%d", &UserType);
    if (Confidence >= 80)
    {
        printf("Face Recognized\n");
        if (UserType == 1)
        {
            printf("Access Granted\n");
        }
        else
        {
            printf("Access Denied\n");
        }
    }
    else if (Confidence >= 50 && Confidence < 80)
    {
        printf("Manual Verification Required\n");
    }
    else
    {
        printf("Face Not Recognized\n");

        if (UserType == 0)
        {
            printf("Access Denied\n");
        }
    }
    return 0;
}
