#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    float *a = (float*) malloc(n * sizeof(float));

    for(i = 0; i < n; i++)
        scanf("%f", &a[i]);

    float max = a[0];

    for(i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];

    printf("The Largest element is : %.2f", max);

    free(a);

    return 0;
}

