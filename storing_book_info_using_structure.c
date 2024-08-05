 #include<stdio.h>
#include<string.h>
struct BookInfo{
  int id;
  char title[500];
  char author[500];
  float price;
};
int main(){
    struct BookInfo B1,B2 ,B3,B4,B5,B6;
    B1.id=1;
    
    strcpy(B1.title,"Grapes");
     strcpy(B1.author,"Adam");
     B1.price=578;
     printf("Book Information:\nBookInfo ID:%d\nTitle:%s\nAuthor:%s\nPrice:%.2f\n",B1.id,B1.title,B1.author,B1.price);
     
       B2.id=2;
    
    strcpy(B2.title,"Cyclone");
     strcpy(B2.author,"Peter");
     B2.price=356;
     printf("Book Information:\nBookInfo ID:%d\nTitle:%s\nAuthor:%s\nPrice:%.2f\n",B2.id,B2.title,B2.author,B2.price);
     
      B3.id=3;
    
    strcpy(B3.title,"Dragon");
     strcpy(B3.author,"Cykes");
     B3.price=340;
     printf("Book Information:\nBookInfo ID:%d\nTitle:%s\nAuthor:%s\nPrice:%.2f\n",B3.id,B3.title,B3.author,B3.price);
      
       B4.id=2;
    
    strcpy(B4.title,"Nemesis");
     strcpy(B4.author,"Henderson");
     B4.price=450;
     printf("Book Information:\nBookInfo ID:%d\nTitle:%s\nAuthor:%s\nPrice:%.2f\n",B4.id,B4.title,B4.author,B4.price);
     
      B5.id=2;
    
    strcpy(B5.title,"Pegasus");
     strcpy(B5.author,"Chris");
     B5.price=657;
     printf("Book Information:\nBookInfo ID:%d\nTitle:%s\nAuthor:%s\nPrice:%.2f\n",B5.id,B5.title,B5.author,B5.price);


     return 0;
}
