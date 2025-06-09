/* WAP to find the max and min of  some values using a function that returns an array */


#include <stdio.h>

int* findMaxMin(int arr[], int n) {
    static int result[2];
    result[0] = arr[0]; // max
    result[1] = arr[0]; // min
    for (int i = 1; i < n; i++) {
        if (arr[i] > result[0]) result[0] = arr[i];
        if (arr[i] < result[1]) result[1] = arr[i];
    }
    return result;
}

int main() {
    int arr[] = {5, 8, 2, 10, 1};
    int *res = findMaxMin(arr, 5);
    printf("Max = %d, Min = %d\n", res[0], res[1]);
    return 0;
}

