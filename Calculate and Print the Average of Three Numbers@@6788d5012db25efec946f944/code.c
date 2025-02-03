#include <stdio.h>
int main() {
    int x,y,z;
    float Average;    
    scanf("%d %d %d",&x,&y,&z);
    Average = (x+y+z)/3;
    printf("Average: %.2f",Average);
    return 0;
}