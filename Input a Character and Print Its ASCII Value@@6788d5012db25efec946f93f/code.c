#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char chr;
    scanf("%c \n",&chr);
    printf(" ASCII Value: %d\n",chr);
    return 0;
}