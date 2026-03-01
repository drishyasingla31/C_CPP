/*5 sub marks enter  
- percen
-33 pass
-60 v good
-80 bad
-99 worst*/

#include<stdio.h>

int main(){
    int m1,m2,m3,m4,m5;
    float sum,p;
    printf("enter marks for subject 1 :\n");
    scanf("%d",&m1);
    printf("enter marks for subject 2 :\n");
    scanf(" %d",&m2);
    printf("enter marks for subject 3 :\n");
    scanf(" %d",&m3);
    printf("enter marks for subject 4 :\n");
    scanf(" %d",&m4);
    printf("enter marks for subject 5 :\n");
    scanf(" %d",&m5);

    sum=m1+m2+m3+m4+m5;
    p=sum/5;

    if(p>=33&&p<60)
    printf("pass\n");
    if(p>=60&&p<80)
    printf("very good!\n");
    if(p>=80&&p<99)
    printf("bad...\n");
    if(p>=99)
    printf("worst case!!");
    return 0;
}