#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if((x>>y)&1){
        printf("1");
    }
    else(
        printf("0");
    )
    return 0;
}