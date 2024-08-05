 #include<stdio.h>
 

int main(){
    float x,y;
    float n,count;
    printf("enter the value of x and n:");
    scanf("%f%f",&x,&n);
y=1;
count=1;

while (count<=n)
{
    y=y*x;

count++;
}
printf("\nx=%f;n=%f;x to power n=%f\n",x,n,y);
     return 0;
}