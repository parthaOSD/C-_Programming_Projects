 #include<stdio.h.>

int main(){
    int x,n;
    int y;
    for(n=0;n<21;n++){

if(n==0){

x=1;
}
else {

    x=x*n;
    y=1/x;
}
printf("%100d %10d %20.12d\n",x,n,y);
}
return 0;
}
    