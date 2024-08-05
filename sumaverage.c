#include <stdio.h>

int main() {
    int numbers[10];
    float sum=0;
float average;
    
    printf("Enter 10 different numbers:\n");
    for (int i = 0; i <10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i] ;
    }

    
     average =  sum / 10;

    
    printf("Sum of the numbers: %f\n", sum);
    printf("Average of the numbers: %f\n", average);

    return 0;
}