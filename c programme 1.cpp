#include <stdio.h>
#include <math.h>

int main() {
    double x, n;
    int choice;
    printf("Enter X: "); if (scanf("%lf", &x) != 1) return 0;
    printf("Enter N: "); if (scanf("%lf", &n) != 1) return 0;

    printf("Choose Operation (1:Pow,2:Add,3:Sub,4:Mul,5:Div): ");
    if (scanf("%d", &choice) != 1) return 0;

    switch(choice) {
        case 1: printf("Pow(X,N) = %.6g\n", pow(x, n)); break;
        case 2: printf("Add(X,N) = %.6g\n", x + n); break;
        case 3: printf("Sub(X,N) = %.6g\n", x - n); break;
        case 4: printf("Mul(X,N) = %.6g\n", x * n); break;
        case 5: 
            if (n == 0) printf("Division by zero error\n");
            else printf("Div(X,N) = %.6g\n", x / n);
            break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
