#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

   
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;  
    }

    
    printf("Natural numbers from %d to 1 are: ", n);
    while (n >= 1) {
        printf("%d ", n);
        n--;
    }

    return 0;  
}