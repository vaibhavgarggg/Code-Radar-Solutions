#include <stdio.h>

int main() {
    int a,b;
    char opt;
    scanf("%d %d",&a,&b);
    scanf("%c",&opt);
    int add = a+b;
    int sub = a-b;
    int div = a/b;
    int mult = a*b;
    switch(opt){
        case '+':
            printf("%d",add);
            break;
        case '-':
            printf("%d",sub);
            break;
        case '/':
            printf("%d",div);
            break;
        case '*':
            printf("%d",mult);
            break;
        default:
            printf("error");
    }
    return 0;
}