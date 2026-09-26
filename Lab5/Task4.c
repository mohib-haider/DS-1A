#include <stdio.h>
int main(){
    int Category, Choice;
    printf("AI ChatBot\n");
    printf("1.Greeting\n");
    printf("2.Study\n");
    printf("3.Weather\n");
    printf("4.Help\n");
    printf("Enter your category: ");
    scanf("%d", &Category);
    switch (Category)
    {
        case 1:
            printf("Greeting\n");
            printf("1.Hello\n");
            printf("2.How are you\n");
            printf("3.Goodbye\n");

            printf("Enter your choice: ");
            scanf("%d", &Choice);

            switch (Choice)
            {
                case 1:
                    printf("Chatbot: Hello! Nice to meet you.");
                    break;

                case 2:
                    printf("Chatbot: I am fine. How can I help you?");
                    break;

                case 3:
                    printf("Chatbot: Goodbye! Have a nice day.");
                    break;

                default:
                    printf("Chatbot: Invalid choice.");
            }
            break;

        case 2:
            printf("Study\n");
            printf("1.Programming\n");
            printf("2.Mathematics\n");
            printf("3.AI\n");

            printf("Enter your choice: ");
            scanf("%d", &Choice);

            switch (Choice)
            {
                case 1:
                    printf("Chatbot: Programming helps you create software and solve problems.");
                    break;

                case 2:
                    printf("Chatbot: Mathematics improves logical and analytical thinking.");
                    break;

                case 3:
                    printf("Chatbot: AI enables computers to perform intelligent tasks.");
                    break;

                default:
                    printf("Chatbot: Invalid choice.");
            }
            break;

        case 3:
            printf("Weather\n");
            printf("1.Today\n");
            printf("2.Tomorrow\n");
            printf("3.Forecast\n");
            printf("Enter your choice: ");
            scanf("%d", &Choice);
            switch (Choice)
            {
                case 1:
                    printf("Chatbot: Today's weather information is selected.");
                    break;

                case 2:
                    printf("Chatbot: Tomorrow's weather information is selected.");
                    break;

                case 3:
                    printf("Chatbot: Weather forecast information is selected.");
                    break;

                default:
                    printf("Chatbot: Invalid choice.");
            }
            break;

        case 4:
            printf("Help\n");
            printf("1.About Chatbot\n");
            printf("2.Commands\n");
            printf("3.Exit\n");

            printf("Enter your choice: ");
            scanf("%d", &Choice);

            switch (Choice)
            {
                case 1:
                    printf("Chatbot: I am a simple rule-based AI chatbot.");
                    break;

                case 2:
                    printf("Chatbot: You can select a category and then choose an option.");
                    break;

                case 3:
                    printf("Chatbot: Exiting chatbot. Goodbye!");
                    break;

                default:
                    printf("Chatbot: Invalid choice.");
            }
            break;

        default:
            printf("Chatbot: Invalid category.");
    }

    return 0;
}
