#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if(x%3==0&&x%5==0){
        printf("Divisible by both");
    }
    else if(X%3==0){
        printf("Divisible by 3");
    }
    else if(x%5==0){
        printf("Divisible by 5");
    }
    return 0;

}