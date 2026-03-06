#include<stdio.h>
int fib(int n){
n=n+1;
if (n=1)
return 1;
return n+fib(n-1);
}

int main(){
    int f=3;
    printf("%d",fib(3));

    return 0;
}