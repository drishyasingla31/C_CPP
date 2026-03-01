//notifciation controlled by user input from if else logic

#include<stdio.h>

int main(){
    int f,y,i,x;
    f=y=x=i=0;
    char c;
    printf("hello\nDo you want any notifications from Facebook?\n");
    printf("enter choice(y/n):\n");
    scanf("%c",&c);
    if(c=='y')
    f=1;
    printf("Do you want any notifications from Youtube?\n");
    printf("enter choice(y/n):\n");
    scanf(" %c",&c);
    if(c=='y')
    y=1;
    printf("Do you want any notifications from Instagram?\n");
    printf("enter choice(y/n):\n");
    scanf(" %c",&c);
    if(c=='y')
    i=1;
    printf("Do you want any notifications from X?\n");
    printf("enter choice(y/n):\n");
    scanf(" %c",&c);
    if(c=='y')
    x=1;

    if(f==1)
    printf("You have 2 new notifications from Facebook!\n");
    if(y==1)
    printf("You have 5 new notifications from Youtube!\n");
    if(i==1)
    printf("You have 9+ new notifications from Instagram!\n");
    if(x==1)
    printf("You have 1 new notifications from X!\n");
    return 0;
}