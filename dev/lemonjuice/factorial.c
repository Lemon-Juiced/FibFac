#include <math.h>

/**
 * Finds the number that produces a given value when its factorial is calculated.
 * 
 * @param target The number you want to "reverse factorial."
 * @param tolerance How close the result needs to be to the target for the search to stop.
 * @param max_iterations The maximum number of adjustments to make during the search.
 * @return The number that produces a factorial close to the target.
 */
double reverse_factorial_search(double target, double tolerance, int max_iterations) {
    double low = 1.0;       // Start searching from 1
    double high = target;   // Target value is an upper bound for the search
    double mid = 0.0;       // Midpoint of the search range

    for (int i = 0; i < max_iterations; i++) {
        mid = (low + high) / 2.0;
        double gamma_val = tgamma(mid + 1); // Gamma(n+1) == n!

        if (fabs(gamma_val - target) < tolerance) {
            return mid; // Close enough to the target
        }

        if (gamma_val < target) {
            low = mid; // Search higher
        } else {
            high = mid; // Search lower
        }
    }

    return mid; // Best approximation after max iterations
}

/**
 * Calculate the factorial of a given double value.
 * 
 * @param n The number to calculate the factorial of
 * @return The factorial of n
 */
double factorial_double_checker(double n) {
    return tgamma(n + 1);
}