#pragma once
#include <inttypes.h>
#include <stdint.h>

/**
 * Fibonacci function
 * 
 * @param n The number of the Fibonacci sequence to calculate
 * @return The nth number in the Fibonacci sequence
 */
uint64_t fibonacci(uint64_t n);

/**
 * Converts a given uint64_t "fibonacci" number to a double
 * 
 * @param n The number of the Fibonacci sequence to calculate
 * @return The nth number in the Fibonacci sequence as a double
 */
double get_fib(uint64_t n);