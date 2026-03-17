#include <stdio.h>
int main()
{
    int n, m;
    printf("what number's table you want to find?:\n");
    scanf("%d", &n);
    printf("Till number you want to multiply?:\n");
    scanf("%d", &m);

    for (int i = 0; i < m + 1; i++)
    {
        printf("%dX%d=%d\n", n, i, n * i);
    }
    return 0;
}