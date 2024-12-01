#include <inttypes.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static uint64_t *memo = NULL;
static size_t memo_size = 0;

/**
 * Fibonacci function with memoization
 * 
 * @param n The number of the Fibonacci sequence to calculate
 * @return The nth number in the Fibonacci sequence
 */
uint64_t fibonacci(uint64_t n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (n >= memo_size) {
        size_t new_size = n + 1;
        memo = realloc(memo, new_size * sizeof(uint64_t));
        for (size_t i = memo_size; i < new_size; i++) {
            memo[i] = UINT64_MAX; // Initialize with a special value
        }
        memo_size = new_size;
    }

    if (memo[n] != UINT64_MAX) return memo[n];

    uint64_t fib1 = fibonacci(n - 1);
    uint64_t fib2 = fibonacci(n - 2);

    // Check for overflow
    if (UINT64_MAX - fib1 < fib2) {
        printf("\033[1;31mOverflow detected at Fibonacci number %" PRIu64 ".\n", n);
        printf("Exiting program.\n\n\033[0m");
        free(memo); // Free the allocated memory
        exit(1); // Exit the program
    }

    memo[n] = fib1 + fib2;
    return memo[n];
}

/**
 * Converts a given uint64_t "fibonacci" number to a double
 * 
 * @param n The number of the Fibonacci sequence to calculate
 * @return The nth number in the Fibonacci sequence as a double
 */
double get_fib(uint64_t n) {
    return (double) fibonacci(n);
}
