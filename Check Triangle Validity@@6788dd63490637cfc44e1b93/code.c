#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&y);
    if(((x*x)+(y*y)=(z*z))||(z*z)+(y*y)=(x*x) || (x*x)+(z*z)=(y*y)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}