 #include<stdio.h.>

int main(){
    int row=2,column=3;
    int arr[2][3];
    int sum=0;
    for (int i = 0; i < row; i++)
    {
        for (int j= 0;j < column;j++)
        {
            printf("Elements [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];

        }
        
    }
       for (int i = 0; i < row; i++)
    {
        for (int j= 0;j < column;j++)
        {
            printf("%d",arr[i][j]);
          

        }
        printf("\n");
    }
    printf("The sum of all elemnts in 2x3 array is :%d\n",sum);
    
     return 0;
}