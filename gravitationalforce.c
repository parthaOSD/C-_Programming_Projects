 #include<stdio.h.>
float force (float g, float m);

int main(){
    float g, m;
    
    printf("enter the value of m:");
    scanf("%f",&m);
    printf("enter the value of g:");
    scanf("%f",&g);
    printf("the value of force is %f\n", force(m,g));
     return 0;
}

float force (float g, float m){
 float force;
force= m*g;
return force;


}