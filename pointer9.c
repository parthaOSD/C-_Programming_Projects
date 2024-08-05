 #include<stdio.h.>
void totalmarksAndrank(int *a, int *b,int *c,int *d, int *totalmarks);
int main(){
    printf("Student name:S.Laxmi\n");
    int i=45;
    int j=67;
    int k= 38;
    int l=55;
    int totalmarks;
    int rank;   
    totalmarksAndrank(&i,&j,&k,&l,&totalmarks);
 printf("the totalmarks of S.Laxmi is %d\n",totalmarks);
 printf("Student name:VS.Rao\n");
 int m=77;
 int n=89;
 int o=56;
 int p=69;
 totalmarksAndrank(&m,&n,&o,&p,&totalmarks);
 printf("the totalmarks of VS.Rao is %d\n",totalmarks);
  printf("Student name:Rakul Singh\n");
 int q=98;
 int r=45;
 int s=66;
 int t=78;
 totalmarksAndrank(&q,&r,&s,&t,&totalmarks);
 printf("the totalmarks of Rakul Singh is %d\n",totalmarks);


   return 0;
}
void totalmarksAndrank(int *a, int *b,int *c,int *d,int *totalmarks){
*totalmarks=*a+*b+*c+*d;
if (*totalmarks>=250)
{
   printf("Rank:1st\n");
}
else if (*totalmarks>=200 && *totalmarks<=250)
{
    printf("Rank:2nd\n");
}
else
{
   printf("Rank:3rd\n");
}

}