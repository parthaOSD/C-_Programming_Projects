 #include<stdio.h.>
void swap(int *a);

int main(){
    int x=4;
    printf("the value of x before swap is %d\n",x);
    swap(&x);
    printf("the value of x after swap is %d\n",x);
     return 0;
}
void swap(int *a){
 *a=*a*10;
}