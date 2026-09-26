#include <stdio.h>
int main(){
    int Category, SubCategory;
    printf("Image Classification System\n");
    printf("1.Animal\n");
    printf("2.Vehicle\n");
    printf("3.Food\n");
    printf("4.Human\n");
    printf("Enter category: ");
    scanf("%d", &Category);

    switch (Category)
    {
        case 1:
            printf("\nAnimal Subcategories:\n");
            printf("1. Cat\n");
            printf("2. Dog\n");
            printf("3. Bird\n");
            printf("Enter subcategory: ");
            scanf("%d", &SubCategory);
            switch (SubCategory)
            {
                case 1:
                    printf("Classification= Animal - Cat");
                    break;
                case 2:
                    printf("Classification= Animal - Dog");
                    break;
                case 3:
                    printf("Classification= Animal - Bird");
                    break;
                default:
                    printf("Invalid subcategory");
            }
            break;
        case 2:
            printf("\nVehicle Subcategories:\n");
            printf("1. Car\n");
            printf("2. Bus\n");
            printf("3. Bike\n");
            printf("Enter subcategory: ");
            scanf("%d", &SubCategory);
            switch (SubCategory)
            {
                case 1:
                    printf("Classification= Vehicle - Car");
                    break;
                case 2:
                    printf("Classification= Vehicle - Bus");
                    break;
                case 3:
                    printf("Classification= Vehicle - Bike");
                    break;
                default:
                    printf("Invalid subcategory");
            }
            break;
        case 3:
            printf("\nFood Subcategories:\n");
            printf("1.Pizza\n");
            printf("2.Burger\n");
            printf("3.Biryani\n");
            printf("Enter Subcategory: ");
            scanf("%d", &SubCategory);
            switch (SubCategory)
            {
                case 1:
                    printf("Classification= Food - Pizza");
                    break;
                case 2:
                    printf("Classification= Food - Burger");
                    break;
                case 3:
                    printf("Classification= Food - Biryani");
                    break;
                default:
                    printf("Invalid subcategory");
            }
            break;
        case 4:
            printf("\nHuman Subcategories:\n");
            printf("1. Male\n");
            printf("2. Female\n");
            printf("3. Child\n");
            printf("Enter subcategory: ");
            scanf("%d", &SubCategory);

            switch (SubCategory)
            {
                case 1:
                    printf("Classification= Human - Male");
                    break;
                case 2:
                    printf("Classification= Human - Female");
                    break;
                case 3:
                    printf("Classification= Human - Child");
                    break;
                default:
                    printf("Invalid subcategory");
            }
            break;

        default:
            printf("Invalid category");
    }

    return 0;
}
