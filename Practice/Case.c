#include<stdio.h>

int main(){
    char c,D;
    D=0;
    printf("enter letter: ");
    scanf("%c",&c);
    if('c'>=65||'c'<=81)
     printf("%c",c);
    if('c'>=97||'c'<=123){
    c= c-32;
    printf("%c",c);
}
    return 0;
}