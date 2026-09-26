#include <stdio.h>
int main(){
    int Permission;
    printf("Enter Permission Value: ");
    scanf("%d", &Permission);
    if (Permission & 1)
    {
        printf("View: Allowed\n");
    }
    else
    {
        printf("View: Not Allowed\n");
    }
    if (Permission & 2)
    {
        printf("Train: Allowed\n");
    }
    else
    {
        printf("Train: Not Allowed\n");
    }
    if (Permission & 4)
    {
        printf("Test: Allowed\n");
    }
    else
    {
        printf("Test: Not Allowed\n");
    }
    if (Permission & 8)
    {
        printf("Deploy: Allowed\n");
    }
    else
    {
        printf("Deploy: Not Allowed\n");
    }
    if ((Permission & 2) && (Permission & 8))
    {
        printf("Training and Deployment permissions are both available.\n");
    }
    else
    {
        printf("Both Training and Deployment permissions are not available.\n");
    }

    return 0;
}
