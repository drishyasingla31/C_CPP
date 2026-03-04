#include<stdio.h>

int main(){
    int n;
    printf("enter number: \n");
    scanf("%d",&n);
    int s=(n/2)*2;
    if (s==n)
        printf("%d is an even number",n);
    else
        printf("%d is an oddd number",n);
    return 0;
}