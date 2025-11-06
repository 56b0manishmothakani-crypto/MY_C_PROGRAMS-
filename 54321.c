 #include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < 5 - i; j++) {
            printf("   "); // 3 spaces for alignment
        }
        // Print the numbers for the current row
        for (int k = i; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}