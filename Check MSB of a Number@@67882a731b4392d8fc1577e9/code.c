#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a = 1 << 31;
    if(n & a){
        printf("Set");

    }
    else{
        printf("Not Set");
    }
    return 0;
}