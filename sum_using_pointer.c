 #include<stdio.h.>

int main(){
   int a;
   printf("Enter the value of a:\n");
   scanf("%d",&a);
   int b;
   printf("Enter the value of b:\n");
   scanf("%d",&b);
   
   int *p=&a;
  int *q=&b;
   int sum=*p+*q;
   printf("The value of sum is:%d\n",sum);

    
     return 0;
}