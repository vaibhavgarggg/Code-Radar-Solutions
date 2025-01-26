#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(i == 2, i < n,i++){
        if(n == 1 || n == 0){
            printf("Not Prime");
        }
        else if(n%i != 0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}