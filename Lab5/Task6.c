#include <stdio.h>
int main(){
    int ProblemType, Algorithm;
    printf("Machine Learning Model Selection\n");
    printf("1.Classification\n");
    printf("2.Regression\n");
    printf("3.Clustering\n");
    printf("4.Computer Vision\n");
    printf("Enter Problem Type: ");
    scanf("%d", &ProblemType);
    
    switch (ProblemType)
    {
        case 1:
            printf("Classification Algorithms\n");
            printf("1.Logistic Regression\n");
            printf("2.Decision Tree\n");
            printf("3.KNN\n");
            printf("Enter Algorithm: ");
            scanf("%d", &Algorithm);
            switch (Algorithm)
            {
                case 1:
                    printf("Selected Model: Logistic Regression");
                    break;
                case 2:
                    printf("Selected Model: Decision Tree");
                    break;
                case 3:
                    printf("Selected Model: KNN");
                    break;
                default:
                    printf("Invalid Algorithm");
            }
            break;

        case 2:
            printf("Regression Algorithms\n");
            printf("1.Linear Regression\n");
            printf("2.Polynomial Regression\n");
            printf("3.SVR\n");
            printf("Enter Algorithm: ");
            scanf("%d", &Algorithm);

            switch (Algorithm)
            {
                case 1:
                    printf("Selected Model: Linear Regression");
                    break;
                case 2:
                    printf("Selected Model: Polynomial Regression");
                    break;
                case 3:
                    printf("Selected Model: SVR");
                    break;
                default:
                    printf("Invalid Algorithm");
           }
            break;

        case 3:
            printf("Clustering Algorithms\n");
            printf("1.K-Means\n");
            printf("2.Hierarchical Clustering\n");
            printf("3.DBSCAN\n");
            printf("Enter Algorithm: ");
            scanf("%d", &Algorithm);

            switch (Algorithm)
            {
                case 1:
                    printf("Selected Model: K-Means");
                    break;
                case 2:
                    printf("Selected Model: Hierarchical Clustering");
                    break;
                case 3:
                    printf("Selected Model: DBSCAN");
                    break;
                default:
                    printf("Invalid Algorithm");
            }
            break;

        case 4:
            printf("Computer Vision Algorithm\n");
            printf("1.CNN\n");
            printf("2.YOLO\n");
            printf("3.R-CNN\n");

            printf("Enter Algorithm: ");
            scanf("%d", &Algorithm);

            switch (Algorithm)
            {
                case 1:
                    printf("Selected Model: CNN");
                    break;
                case 2:
                    printf("Selected Model: YOLO");
                    break;
                case 3:
                    printf("Selected Model: R-CNN");
                    break;
                default:
                    printf("Invalid Algorithm");
            }
            break;

        default:
            printf("Invalid Problem Type");
    }

    return 0;
}
