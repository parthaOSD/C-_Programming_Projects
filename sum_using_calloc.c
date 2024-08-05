 #include<stdio.h.>
 #include<stdlib.h.>
int main(){
    float *ptr;
    int n;
    float sum=0;
    puts("Enter the value of n:");
    scanf("%d",&n);
   ptr=(float *) calloc(n, sizeof(float));
   if (ptr==NULL)
   {
    printf("Memory allocation failed.");
   }
   else{
    printf("Enter data:");
       for (int i = 0; i < n; i++)
       {
        scanf("%f",&ptr[i]);
       }
       for (int i = 0; i < n; i++)
       {
        sum=sum+ptr[i];
       }
       printf("Sum is:%f\n",sum);

   }
   
     return 0;
}