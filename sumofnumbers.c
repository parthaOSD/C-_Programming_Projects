#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Iterate through each digit of the number
    for (; num != 0; num /= 10) {
        // Extract the last digit
        digit = num % 10;
        // Add the digit to the sum
       sum= sum + digit;
    }

    // Print the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
