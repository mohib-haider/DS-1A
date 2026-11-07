#include <stdio.h>
#include <string.h>
int main(){
    char Email[100], Domain[100];
    char *At;
    printf("Enter email address: ");
    scanf("%s", Email);
    At = strchr(Email, '@');
    if (At == NULL) {
        printf("Invalid Email Format\n");
    }
	else {
        strcpy(Domain, At + 1);
        printf("Domain: %s\n", Domain);
    }
    return 0;
}
