#include <stdio.h>

int main(){
    long long n;
    if(scanf("%lld",&n)!=1) return 0;
    if(n<0){ printf("Invalid\n"); return 0; }
    long long f=1;
    for(long long i=1;i<=n;i++) f*=i;
    printf("%lld\n", f);
    return 0;
}

