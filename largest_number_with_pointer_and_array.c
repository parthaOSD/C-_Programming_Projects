 #include<stdio.h.>
 float LargestNumber(float *ptr,int size);
int main(){
    float numbers[5]={983,2.9,34,493,1000.567};
    float *p=numbers;
float num=LargestNumber(p,5);
printf("Largest number of the array is:%f\n",num);
     return 0;
}
float LargestNumber(float *ptr,int size){
float largestnum=*ptr;
    for (int i = 1; i < size; i++)
    {
       if(ptr[i]>largestnum)
       largestnum=ptr[i];
    }
    return largestnum;
}
