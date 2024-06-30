#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) {  // Numbers less than or equal to 1 are not prime
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {  // Loop from 2 to the square root of n
        if (n % i == 0) {  // If n is divisible by any number, it is not prime
            return 0;
        }
    }
    return 1;  // If no divisors are found, n is prime
}

int main() {
    for (int num = 2; num <= 200; num++) {  // Loop through numbers from 2 to 200
        if (is_prime(num)) {  // Check if the number is prime
            printf("%d ", num); 
        }
    }

    return 0;
}
