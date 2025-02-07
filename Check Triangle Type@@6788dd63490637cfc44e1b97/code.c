#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (x==y && x==z && y==z){
        printf("Equilateral");
    }
    else if((x==y && x!=z)||(x==z && x!=y)||(y==z && y!=x)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}