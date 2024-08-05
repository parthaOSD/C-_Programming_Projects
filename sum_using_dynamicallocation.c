 #include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    int n;
    float sum=0;
    puts("Enter the value of n:\n");
    scanf("%d",&n);

   ptr=(float*) malloc(n*sizeof(float));
   if (ptr==NULL)
   {
    printf("Memory allocation failed.");
   }
   else{
     puts("Enter data: ");
   }
          for (int i = 0; i < n; i++) {
            scanf("%f", &ptr[i]);    
        }

     
        for (int i = 0; i < n; i++) {
            sum = sum + ptr[i];    
        }

        printf("The sum is %.2f", sum);
    

    return 0;
}
   

   

    
