#include <stdio.h>
int main() {
    double x;
    int terms = 20;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    double sum = 1.0, term = 1.0;
    for (int i = 1; i < terms; i++) {
        term = term * x / i;
        sum += term;
    }

    printf("e^(%.1f) = %.4f\n", x, sum);
    return 0;
}