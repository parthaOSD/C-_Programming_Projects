 #include<stdio.h.>
#define colmax 10
#define rowmax 12
int main(){
    int column,row, y;
    printf("multiplication table\n");
    do
    {
        column=1;
        do
        {
            y=row*column;
            printf("%4d",y);
            column=column+1;
        } while (column<=colmax);
        printf("\n");
        row=row+1;
    } while (row<=rowmax);
     printf("\n");
     return 0;
}