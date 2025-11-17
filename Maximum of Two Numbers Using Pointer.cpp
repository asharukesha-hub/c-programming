#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int *p = &a;
    int *q = &b;

    if(*p > *q)
        printf("%d is the maximum number.", *p);
    else
        printf("%d is the maximum number.", *q);

    return 0;
}

