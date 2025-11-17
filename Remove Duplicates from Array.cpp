#include <stdio.h>

int main()
{
    int n, i, j, temp;
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);


    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    
    printf("Sorted Array = {");

    printf("%d", a[0]);  
    for(i = 1; i < n; i++)
        if(a[i] != a[i - 1])
            printf(", %d", a[i]);

    printf("}");

    return 0;
}


