#include<stdio.h>

int main()
{
    /*int val;
    int a = 10;
    int *ref = &a;
    //&val=a;

    printf("%d",a);
    printf("%d",ref);
    return 0;*/
    int a = 10;
    int *ref = &a;
    printf("%d\n\n",a);

    printf("%d\n",ref);
    printf("%d\n",&ref);
    printf("%d\n",*ref);
    *ref=20;
    printf("%d\n",ref);
    printf("%d\n",&ref);
    printf("%d\n",*ref);
    printf("%d\n\n",a);
}