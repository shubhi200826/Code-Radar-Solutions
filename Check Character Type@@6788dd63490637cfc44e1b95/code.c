#include <stdio.h>

int main() {
    int x;
    scanf("%c",&x);
    if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        printf("Vowel");
    }
    else if(x=='a'||x=='i'||x=='e'||x=='o'||x=='u'){
        printf("Vowel");
    }
    else if(x>='a'&&x<='z'){
        printf("Consonant");
    }
    else if(x>='a'&& x<='Z'){
        printf("Consonant");
    }
    else if(x>='0'&&x<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }

    return 0;
}