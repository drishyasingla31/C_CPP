#include<stdio.h>
int fib(int n)
{
    if (n==0)
       return 0;
    else if(n==1)
        return 1;
    else
        return(fib(n-2)+fib(n-1));
}

int main(){
    int f=1;
    int c;
    c=fib(1);
    printf("%d",c);
    return 0;
}