#include <stdio.h>

// Function to calculate nth Fibonacci number using recursion
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

// Function to display Fibonacci series using recursion
void displayFibonacciRecursive(int n) {
    printf("Fibonacci Series using Recursion: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");
}

int main() {
    int n;

    // Take input from the user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Display Fibonacci series using recursion
    displayFibonacciRecursive(n);

    return 0;
}