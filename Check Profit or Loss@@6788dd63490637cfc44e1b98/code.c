#include <stdio.h>

int main() {
    int cost,selling;
    scanf("%d %d",&cost,&selling);
    int a == selling - cost;
    if(a>0){
        printf("Profit");
    }
    else if(a<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}