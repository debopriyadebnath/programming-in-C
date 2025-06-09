#include <stdio.h>

int main() {
    int mat[5][5], i, j;
    int count = 1;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) 
            mat[i][j] = count++;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j)
                printf("%d ", mat[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
 