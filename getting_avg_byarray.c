 #include<stdio.h>
double getAverage(float arr[],int size);
int main(){
    float numbers[5]={23.5,78,56.65,89.5,67};
    double avg= getAverage(numbers,5);
    printf("Average: %.3lf\n",avg);
     return 0;
}
double getAverage(float arr[],int size){

    double avg,sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/size;
    return avg;
    
    
}