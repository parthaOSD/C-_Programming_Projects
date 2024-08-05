 #include<stdio.h.>
#include<string.h>
int main(){
    char str1[50],str2[50];
    puts("Enter 1st string:");
    scanf("%[^\n]%*c",str1);
      puts("Enter 2nd string:");
    scanf("%[^\n]%*c",str2);
    strcat(str1, " ");
    strcat(str1,str2);
    printf("strcat:%s\n",str1);
     return 0;
}