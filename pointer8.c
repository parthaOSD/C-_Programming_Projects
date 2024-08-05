 #include<stdio.h.>
void largest(int *a,int *b);
int main(){
    int *i=4;
    int *j=5;
    largest(&i,&j);
     return 0;
}
void largest(int *a,int *b){
if (*a > *b)
{
   printf("the largest number is %d\n",*a);
}
else{
     printf("the largest number is %d\n",*b);
}


}