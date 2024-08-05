 #include<stdio.h.>

int main(){
    int n,r;
    int fact(int)
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value of r:")
    scanf("%d",&r);
    if (n<r)
    
        printf(" invalid input");
        
    else
    printf("binomail coefficient is %d",(fact(n))/(fact(n-r)*fact(r)));
    
    int fact(int x){

if(x==0||x==1)
return 1;
else
return (x*fact(x-1));

    }
     return 0;
}