 #include <stdio.h>

// Function to calculate factorial (for small N)
long long calculate_factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate sum of digits (reusing explicit function)
int getSumOfDigits(long long n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N = 5; // Example for N=5 (1! + 2! + 3! + 4! + 5! = 153)
    long long sum_of_facts = 0;
    
    printf("Calculating sum of factorials from 1! to %d!\n", N);

    for (int i = 1; i <= N; i++) {
        long long fact = calculate_factorial(i);
        sum_of_facts += fact;
        printf("%d! = %lld\n", i, fact);
    }

    printf("Total sum of factorials: %lld\n", sum_of_facts);
    printf("Sum of digits of the total sum: %d\n", getSumOfDigits(sum_of_facts));

    return 0;
}