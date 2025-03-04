#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Asking for user input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculating sum
    sum = num1 + num2;

    // Displaying result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

