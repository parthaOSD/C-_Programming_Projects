 #include<stdio.h>
 #include<stdlib.h>
 int Sum_of_Primes(int *ptr, int n);
int main(){
    int *ptr,n;
    int sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if (ptr==NULL){
    printf("Allocatin failed.");
    }
    else{

        for (int i = 0; i < n; i++)
        {
           ptr[i]=i+1;
        }
        printf("The values present in the allocated memory:");
         for (int i = 0; i < n; i++)
        {
           printf("%d\n",ptr[i]);
        }
        for (int i = 1; i < n; i++)
        {
             if (Prime(ptr[i])){
        sum=sum+ ptr[i];
            }
            printf("The sum of Prime numbers is %d\n",sum);
        }
        
        
         
       
      
        
        
     
       
       

        
    }
     return 0;
}