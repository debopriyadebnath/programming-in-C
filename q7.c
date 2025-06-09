#include <stdio.h>

int main() {
    int a[] = {4, 2, 9, 1, 5};
    int n = 5, temp;
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j]) {
                temp = a[i]; a[i] = a[j]; a[j] = temp;
            }
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
