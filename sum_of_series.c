#include<stdio.h>
  #include<math.h>
float binomial ( float n);
int main(){
 float number,sum,x;
printf("enter the number : ");
scanf("%d",&number);
sum+=pow(number,x);

 printf("the value of binomial is %d", sum,(1/(1-x)));

     return 0;
}
float binomial ( float n){
    float x;
    if (x==1)
    {
        return 1;
    }
    else{
        return (1/(1-x));
    }
    
}