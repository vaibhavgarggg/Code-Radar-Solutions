#include <stdio.h>
int main() {
    int n;
    scnaf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("*");
        }
        for(int k = 1; k<=i;k++){
            printf("* ");
        }
        for(int l = 1; l <= n;l++){
            printf("*");
        }
        printf("\n")
    }
    printf("%s", welcome());
    return 0;
}