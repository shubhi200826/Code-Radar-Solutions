#include <stdio.h>

int main() {
    int num;
    if(num&(1<<31)){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}