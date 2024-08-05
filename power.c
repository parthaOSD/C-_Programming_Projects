 #include<stdio.h.>

int main(){
    int count, n;
    float x,y;
    printf("Enter the value of x and n:");
    scanf("%d",&n);
    scanf("%f",&x);
    y=1.0;
    count=1;
    while (count<=n)
    {
        y=y*x;
        count++;
    }
    printf("the value of x is %f\n;value of n is %d;x to power n=%f\n",x,n,y);
    
     return 0;
}