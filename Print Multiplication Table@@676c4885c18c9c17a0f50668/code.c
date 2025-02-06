#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int product = 0;
    for(int i = 1; i <=10; i++){
        product = n*i;
        printf("2 x %d = %d",i,product);
    }
    printf("\n");
    
    return 0;
}