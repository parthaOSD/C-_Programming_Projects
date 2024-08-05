  #include<stdio.h.>
 float average( int a,int b,int c);
 int main(){
    int a,b,c;
  printf("enter the value of a:");
scanf("%d",&a);
 printf("enter the value of b:");
scanf("%d",&b);
 printf("enter the value of c:");
scanf("%d",&c);
printf("the value of average is %f\n", average(a,b,c));
     return 0;
 }
float average( int a,int b,int c){
    float average;
    average=(float)(a+b+c)/3;
    return average;
}
