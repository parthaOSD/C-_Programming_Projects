 
   
   
    
   #include <stdio.h>

int main() {
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;  
    }

  
    printf("Natural numbers from 1 to %d are: ", n);
    int i = 1;
    while (i <= 5) {
        printf("%d\n ", i);
        i++;
    }
    

    return 0;  
}