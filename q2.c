#include <stdio.h>
int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}


int main() {
    int start = 10, end = 200;
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i))
            printf("%d ", i);
    }
    return 0;
}
