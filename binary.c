 #include <stdio.h>

int main() {
    int num;

    // Input: Prompt user for a number between 0 and 225
    printf("Enter a number between 0 and 225: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0 || num > 225) {
        printf("Invalid input! Please enter a number between 0 and 225.\n");
        return 1;
    }

    // Display binary equivalent (8 bits)
    printf("Binary equivalent of %d is: ", num);
    for (int i = 7; i >= 0; i--) {
        int bit = (num >> i) & 1;  // Extract the i-th bit
        printf("%d", bit);
    }

    printf("\n");
    return 0;
}
