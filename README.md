# Fibonacci Factorial Approximation

This project approximates the number whose factorial is closest to a specified Fibonacci number.

## Description

The program calculates the nth Fibonacci number and then finds the number whose factorial is closest to that Fibonacci number. It uses the Gamma function to handle non-integer factorials.

## Usage

1. Compile the program using `make` or your preferred method.
2. Run the executable.
3. Enter the Fibonacci sequence index number when prompted.
4. The program will output the nth Fibonacci number, the number whose factorial is closest to that Fibonacci number, and the factorial of that number.

## Examples

### Example #1

Enter the Fibonacci sequence index number to calculate: 20  
The 20th Fibonacci number is 6765  
The number whose factorial is approximately 6765 is 7.14534  
The factorial of 7.14534 is 6765  
Final Answer: 7.145343  

### Example #2

Enter the Fibonacci sequence index number to calculate: 32  
The 32th Fibonacci number is 2178309  
The number whose factorial is approximately 2178309 is 9.78202  
The factorial of 9.78202 is 2178309  
Final Answer: 9.782022  

## Files

- `main.c`: Contains the main function and the logic for user interaction.
- `fibonacci.h` and `fibonacci.c`: Contains the implementation for calculating Fibonacci numbers.
- `factorial.h` and `factorial.c`: Contains the implementation for calculating factorials using the Gamma function.

## Author

Rob

## License

This project is licensed under the GPLv3 License.
