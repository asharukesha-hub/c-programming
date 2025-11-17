#include <stdio.h>

int isComposite(int x)
{
    int i;
    if(x <= 3)
        return 0;

    for(i = 2; i * i <= x; i++)
        if(x % i == 0)
            return 1;

    return 0;
}

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
        if(isComposite(a[i]))
            count++;

    printf("Number of Composite Numbers = %d", count);

    return 0;
}

