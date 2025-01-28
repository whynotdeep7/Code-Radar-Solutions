#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char chr;
    scanf("%c \n",&chr);
    print(" ASCII Value: %d\n",chr);
    return 0;
}