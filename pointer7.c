 #include<stdio.h>
void multiplication (int a);

int main(){
    int i=4;
    printf("the value of i is %d\n",i);
    multiplication(i);
    printf("the value of i after multiply by 10 is %d\n",i);
     return 0;
}
void multiplication(int a){
    a=a*10;
}