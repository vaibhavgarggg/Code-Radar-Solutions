#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i = 2; i < n; i++){
        if(n = 2){
            printf("Prime");
            break;
        }
        else if(n%i != 0){
            printf("Prime");
            break;
        }
        else{
            printf("Not Prime");
            break;
        }
    }
    return 0;
}