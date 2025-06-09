#include <stdio.h>

int main() {
    int a = 10, b = 5;
    char op = '/';
    switch (op) {
        case '+': printf("Sum = %d\n", a + b); break;
        case '-': printf("Difference = %d\n", a - b); break;
        case '*': printf("Product = %d\n", a * b); break;
        case '/': if(b != 0) printf("Quotient = %d\n", a / b); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
