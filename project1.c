#include <stdio.h>

int main() {
    int n, first_digit, last_digit, reversed;

    // Prompt user for input
    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    // Extract digits
    last_digit = n % 10;  // Get the last digit
    first_digit = n / 10; // Get the first digit

    // Reverse the number
    reversed = (last_digit * 10) + first_digit;

    // Print the result
    printf("The reversal is: %d\n", reversed);

    return 0;
}
