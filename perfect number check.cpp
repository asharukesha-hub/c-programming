#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    if(n<=1){ printf("Not Perfect\n"); return 0; }
    int sum=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i) sum+=n/i;
        }
    }
    printf(sum==n ? "Its a Perfect Number\n" : "Not Perfect\n");
    return 0;
}

