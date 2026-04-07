#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int gs = -3;
    int atmp = 0;
    srand(time(0));
    num = (rand() % 100) + 1;
    while (gs != num)
    {
        printf("enter your guess: ");
        scanf("%d", &gs);

        if (gs > num)
            printf("go low\n");
        else if (gs < num)
            printf("go high\n");
        atmp++;
    }
    printf("corect\n");
    printf("number of attempts=%d", atmp);
    return 0;
}