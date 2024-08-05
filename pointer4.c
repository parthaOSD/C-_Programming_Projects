 #include<stdio.h>
void change(int *a, int *b);

int main(){
    int x=4,y=5;
    printf("the value of x and y before change is %d %d\n",x,y);
    change(&x ,&y);
    printf("the value of x and y after change is %d %d\n",x,y);
     return 0;
}
void change(int *a,int *b){
int temp;
 temp=*a;
 *a=*b;
 *b=temp;



}