// Calculate 1! + 1/2! + 1/3! + ... + 1/n!, when the user inputs n
// Use recursion

#include <stdio.h>

int factorial(int);

int main() {
    int n;
    double result = 0.0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result += (1.0 / factorial(i));
    }

    printf("\nThe result is: %.3f", result);

    return 0;
}

int factorial(int n) {
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}