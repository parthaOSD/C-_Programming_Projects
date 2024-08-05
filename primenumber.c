 #include <stdio.h>


int isPrime(int n) {
for (int i = 2; i <=n; i++)
{
   if(n%i==0){
   return 0;
}
return 1;
}
}
int main(){
int n1,n2;
printf("enter the first number:");
scanf("%d",&n1);

printf("enter the second number:");
scanf("%d",&n2);

printf("the prime numbers between %d and %d are:",n1,n2);
for (int i = n1; i <= n2; i++)
{
    if(isPrime(i)){
    printf("%d ",i);
}

return 0;
}
}



    
