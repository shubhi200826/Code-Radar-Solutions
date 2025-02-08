#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x&(1<<y)){
        printf("%d",x);
    }
    return 0;
}