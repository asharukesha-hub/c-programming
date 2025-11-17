#include <stdio.h>

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);

    float a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        if(a[i] < 0)
            count++;
    }

    printf("Number of negative numbers in Array elements = %d", count);

    return 0;
}

