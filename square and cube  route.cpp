#include <stdio.h>

int main(){
    double x; if(scanf("%lf",&x)!=1) return 0;
    printf("Square Number: %.6g\nCube Number: %.6g\n", x*x, x*x*x);
    return 0;
}

