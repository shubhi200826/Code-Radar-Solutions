#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d",&x,&y);
    if(z== (x & ~(1<<y))){
        printf("%d",z);
    }
    return 0;
}