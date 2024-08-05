 #include<stdio.h.>

int main(){
    int i=45;
    int *j=&i;
    printf("the address of i is %d\n",*j);
    printf("the value of i is %d\n",*j);
     return 0;
}