#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    printf("Hexadecimal: %d\xhh",a);
    printf("Octal: %d\ooo",a);
    return 0;
}