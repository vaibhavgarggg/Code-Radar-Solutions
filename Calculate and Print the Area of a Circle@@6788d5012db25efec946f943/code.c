#include <stdio.h>

int main() {
    float a;
    float b = 3.14;
    scanf("%f",&a);
    float area = b*a*a;

    printf("Area: %.2f",area);
    return 0;
}