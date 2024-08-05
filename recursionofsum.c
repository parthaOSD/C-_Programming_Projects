 #include<stdio.h.>
int sum(int num);
int main(){
    int num;

    printf("enter the value of num:");
    scanf("%d", &num);
    int result=sum(num);
    printf("result is %d\n",sum(num));
    
     return 0;
}
int sum ( int num){


if (num==0)
{
   return 0;

}
else{

   return num+sum(num-1);
}


}


