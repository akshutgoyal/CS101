#include <stdio.h>

int main() {
    int choice;
    printf("Menu:\n");
    printf("1. Say Hello\n");
    printf("2. Say Goodbye\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Hello! Hope you are having a great day.\n");
            break;
        case 2:
            printf("Goodbye! See you next time.\n");
            break;
        case 3:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            break;
    }

    return 0;
}