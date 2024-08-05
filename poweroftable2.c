 #include<stdio.h.>
#include<math.h>
int main(){
    
   int n;
    
    printf("power of 2 table:");
    
    for( n = -20; n <=20; n++)
    {
      
        
        printf("2^%d=%.0f\n",n,pow(2,n));
    }
    
     return 0;
}