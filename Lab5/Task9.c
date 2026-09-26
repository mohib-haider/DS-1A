#include <stdio.h>
#include <math.h>
int main(){
    int Choice;
    double Num, Base, Exponent;
    printf("AI Mathematical Calculator\n");
    printf("1.Square Root\n");
    printf("2.Power\n");
    printf("3.Absolute Value\n");
    printf("4.Floor\n");
    printf("5.Ceiling\n");
    printf("Enter your choice: ");
    scanf("%d", &Choice);
    
    switch (Choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &Num);
            if (Num >= 0)
            {
                printf("Square Root = %.2lf\n", sqrt(Num));
            }
            else
            {
                printf("Invalid Input: Square root of a negative number is not allowed.\n");
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%lf", &Base);
            printf("Enter exponent: ");
            scanf("%lf", &Exponent);
            printf("Power = %.2lf\n", pow(Base, Exponent));
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%lf", &Num);
            printf("Absolute Value = %.2lf\n", fabs(Num));
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%lf", &Num);
            printf("Floor = %.2lf\n", floor(Num));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &Num);
            printf("Ceiling = %.2lf\n", ceil(Num));
            break;

        default:
            printf("Invalid Menu Choice.\n");
    }

    return 0;
}
