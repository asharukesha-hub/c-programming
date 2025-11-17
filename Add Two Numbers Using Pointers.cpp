#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    int *a = &x;
    int *b = &y;

    printf("The sum of the entered numbers is : %d", *a + *b);

    return 0;
}

