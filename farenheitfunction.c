 #include<stdio.h>
float farenheit(float celcius);
int main(){
    float celcius;
    printf("enter the value of celcius:");
    scanf("%f",&celcius);
    printf("the value of farenheit is %f\n", farenheit(celcius));

     return 0;
}
float farenheit(float celcius){
float farenheit;
farenheit=((9*celcius)/5)+32;
return farenheit;

}
