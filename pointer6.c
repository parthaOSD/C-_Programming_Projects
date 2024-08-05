 #include<stdio.h.>

int main(){
    int a,*ptr,**ptr_ptr;
    a=4;
    ptr=&a;
    ptr_ptr=&ptr;
    printf("the value of a is %d\n",**ptr_ptr);

     return 0;
}