#include <stdio.h>

/* Function to get sum of digits recursively (implicit self-call) */
int sumDigitsRecursive(int n) {
    if (n == 0) {
        return 0; // Base case
    } else {
        return (n % 10) + sumDigitsRecursive(n / 10); // Recursive call
    }
}

int main() {
    int number = 687;
    printf("Number: %d\n", number);
    printf("Sum of digits (implicit/recursive): %d\n", sumDigitsRecursive(number));
    return 0;
}