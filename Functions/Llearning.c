#include<stdio.h>
float avg(int a, int b){
    float c;
    c=(float)(a+b)/2;
    return c;
}
int main(){
    int x=65,y=78;
    printf("avg is %0.2f",avg(x,y));
    return 0;
}