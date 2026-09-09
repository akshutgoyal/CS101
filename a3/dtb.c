#include <stdio.h>

int main() {
    int choice, dec, bin;
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &dec);
        if (dec == 0) {
            printf("Binary: 0\n");
        }

        int binaryNum = 0;
        int placeValue = 1;

        while (dec > 0) {
            int remainder = dec % 2;
            binaryNum += remainder * placeValue;
            placeValue *= 10;
            dec /= 2;
        }
        printf("Binary: %d\n", binaryNum);
    } else if (choice == 2) {
        printf("Enter a binary number: ");
        scanf("%d", &bin);
        int decimalNum = 0;
        int base = 1;
        while (bin > 0) {
            int lastDigit = bin % 10;
            decimalNum += lastDigit * base;
            bin /= 10;
            base *= 2;
        }
        printf("Decimal: %d\n",decimalNum);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}