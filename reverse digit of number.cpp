#include <stdio.h>
#include <stdlib.h>

int main(){
    long long num;
    if(scanf("%lld",&num)!=1) return 0;
    int neg = num<0;
    if(neg) num = -num;
    long long rev = 0;
    while(num>0){ rev = rev*10 + (num%10); num/=10; }
    if(neg) rev = -rev;
    printf("%lld\n", rev);
    return 0;
}

