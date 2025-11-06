 #include <stdio.h>
#include <math.h>  // for sqrt()

int main() {
    int n, i;
    int prime = 1; // assume the number is prime

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                prime = 0; // found a divisor
                break;
            }
        }

        if (prime)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    return 0;
}
