//swapping without usage of 3rd variable

#include<stdio.h>

int main(){
    int a=5,b=9;
    printf("a=%d,b=%d\n",a,b);
    a+=b; //a=14
    b=a-b; //b=5
    a-=b; //a=9
    printf("a=%d,b=%d",a,b);
    return 0;
}