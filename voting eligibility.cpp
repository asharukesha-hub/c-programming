#include <stdio.h>

int main(){
    int age; if(scanf("%d",&age)!=1) return 0;
    if(age>=18) printf("Allowed to vote\n");
    else if(age>=0) printf("You are allowed to vote after %d years\n", 18-age);
    else printf("Invalid\n");
    return 0;
}

