#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x = a+b;
    int y = b+c;
    int z = c+a;
    if(x>c && y >a && z > b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}