#include <stdio.h>

/* Function to get sum of digits iteratively (explicit loop) */
int getSumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10; // Add the last digit
        n /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int number = 687;
    printf("Number: %d\n", number);
    printf("Sum of digits (explicit): %d\n", getSumOfDigits(number));
    return 0;
}