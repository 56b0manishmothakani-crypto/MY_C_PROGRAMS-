 #include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number; // Reset originalNumber to the input value

    // Calculate the sum of the power of digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n); // raise each digit to the power of n
        originalNumber /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}