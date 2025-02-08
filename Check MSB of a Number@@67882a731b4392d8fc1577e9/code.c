#include <stdio.h>

int main() {
    int n[100];
    scanf("%d",&n);
    if(n | 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}