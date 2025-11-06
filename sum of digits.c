 #include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the number from the user
    scanf("%d", &number);

    // Loop to extract digits and calculate their sum
    while (number != 0) {
        // Extract the last digit using the modulo operator
        digit = number % 10;
        // Add the extracted digit to the sum
        sum += digit;
        // Remove the last digit by integer division
        number /= 10;
    }

    // Print the sum of the digits
    printf("Sum of the digits: %d\n", sum);

    return 0;
}