#include <inttypes.h>
#include <stdio.h>
#include "fibonacci.h"
#include "factorial.h"

/**
 * Find the number whose factorial is closest to a given Fibonacci number.
 * This program approximates the number whose factorial is closest to a specified Fibonacci number.
 * 
 * @author Rob
 * @return 0 on successful execution
 */
int main() {
    // Get input from the user to calculate the nth Fibonacci number
    uint64_t n;
    printf("Enter the Fibonacci sequence index number to calculate: ");
    scanf("%" SCNu64, &n);

    // Get the nth Fibonacci number (and deal with potential overflow)
    double fib = fibonacci(n);
    printf("The %" PRIu64 "th Fibonacci number is %.0f\n", n, fib);

    // Find the number whose factorial is closest to the Fibonacci number
    double tolerance = 0.0001; // Allowable error in the result
    int max_iterations = 100;  // Max binary search iterations
    double result = reverse_factorial_search(fib, tolerance, max_iterations);
    printf("The number whose factorial is approximately %.0f is %.5f\n", fib, result);

    // Double-check the factorial of the result
    double factorial = factorial_double_checker(result);
    printf("The factorial of %.5f is %.0f\n", result, factorial);

    // Finish the program
    printf("Final Answer: %f\n\n", result);
    return 0;
}