#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reversing the number using a for loop
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    // Displaying the reversed number
    printf("The reverse of the number is: %d\n", reversedNum);

    return 0;
}