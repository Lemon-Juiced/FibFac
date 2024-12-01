#pragma once
#include <math.h>

/**
 * Finds the number that produces a given value when its factorial is calculated.
 * 
 * @param target The number you want to "reverse factorial."
 * @param tolerance How close the result needs to be to the target for the search to stop.
 * @param max_iterations The maximum number of adjustments to make during the search.
 * @return The number that produces a factorial close to the target.
 */
double reverse_factorial_search(double target, double tolerance, int max_iterations);

/**
 * Calculate the factorial of a given double value.
 * 
 * @param n The number to calculate the factorial of
 * @return The factorial of n
 */
double factorial_double_checker(double n);