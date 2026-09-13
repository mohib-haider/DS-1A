#include <stdio.h>

int main() {
	
    int role, status, securityLevel;
    printf("Enter Role of User (Admin = 1,Researcher = 2, Student = 3): ");
    scanf("%d", &role);
    printf("Enter Account Status (Active = 1, Inactive= 0): ");
    scanf("%d", &status);
    printf("Enter Security Level: ");
    scanf("%d", &securityLevel);

    if (status == 0) {
        printf("Access Denied");
        return 0;
    }
    if (role == 1) {
        if (securityLevel >= 3) {
            printf("Access Granted: Admin");
        }
        else {
            printf("Access Denied");
        }
    }
    else if (role == 2) {
        if (securityLevel >= 2) {
            printf("Access Granted: Researcher");
        }
        else {
            printf("Access Denied");
        }
    }
    else if (role == 3) {
        if (securityLevel >= 1) {
            printf("Access Granted: Student");
        }
        else {
            printf("Access Denied");
        }
    }
    else {
        printf("Invalid Role");
    }
    return 0;
}
