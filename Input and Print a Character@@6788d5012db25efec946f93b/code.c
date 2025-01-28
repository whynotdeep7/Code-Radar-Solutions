#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char chr;
    scanf("%c",&chr);
    printf("You entered: %c",chr);
    return 0;
}