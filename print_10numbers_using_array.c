 #include<stdio.h.>

int main(){
    long scoresTen[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number for %ld:",i);
        scanf("%ld",&scoresTen[i]);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%ld",scoresTen[i]);
    }
    long i;
    if (scoresTen[i]>=10)
    {
        printf("largest number is %ld",scoresTen[i]);
    }
    
    
   
    
    
    
    
     return 0;
}