 #include<stdio.h.>
 // function declaration//
int sum(int n);
int main(){
    // function calling//
    printf("sum is %d",sum(5));
     return 0;
}
// recursive function //
int sum(int n){
    if (n==1)
    {
        return 1;
    }
    
    int x= sum(n-1);
    int y=x+n;
    return y;
}