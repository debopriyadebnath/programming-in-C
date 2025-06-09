#include <stdio.h>

int main() {
    int arr[] = {1, 4, 7, 2, 8}, sum = 0;
    for (int i = 0; i < 5; i++)
        if (arr[i] % 2 == 0)
            sum += arr[i];
    printf("Sum of even = %d\n", sum);
    return 0;
}
