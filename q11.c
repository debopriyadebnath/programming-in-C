#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int lower, upper;

    // Taking input
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    // Printing palindrome numbers
    printf("Palindrome numbers between %d and %d:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
