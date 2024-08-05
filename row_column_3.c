 #include<stdio.h.>
#define ROWMAX 10
#define COLMAX 12
int main(){
    int row;
    int column;
    int y;

    for (row=1; row <= ROWMAX; row++)
    {
        for ( column= 1; column <= COLMAX; column++)
        {
            y=row*column;
            printf("%4d",y);
        }
        printf("\n");
        
    }
    
     return 0;
}