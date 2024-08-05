 #include<stdio.h.>
#define COLMAX 10
#define ROWMAX 12
int main(){
    int row,column,y;
    row=1;
    printf("MULTIPLICATION TABLE \n");
    do{
        column=1;
       
      do {
     y=row*column;
        printf("%8.2d",y);
        column =column +1;

    }
  
    while(column<=COLMAX);
    printf("\n");
    row=row+1;

     
}
 
while (row<=ROWMAX);

  return 0;


}


