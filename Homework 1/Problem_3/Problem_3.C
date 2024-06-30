#include <stdio.h>
#include<math.h>
// Function to calculate factorial
int factorial(int n) {
    int result = 1;
    // Calculate factorial
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate binomial coefficient C(n, m)
int binomial_coefficient(int n, int m) {
    if (m > n) {
        return 0;  // Invalid input, return 0 (or handle error as needed)
    }
    // Calculate C(n, m) = n! / (m! * (n - m)!)
    return factorial(n) / (factorial(m) * factorial(n - m));
}

// Main function
int main() {
    int n, m;
    printf("Enter n and m to calculate C(n, m): ");
    scanf("%d %d", &n, &m); // Input n and m from user

    // Calculate and print binomial coefficient
    printf("C(%d, %d) is: %d\n", n, m, binomial_coefficient(n, m));

    return 0;
}

