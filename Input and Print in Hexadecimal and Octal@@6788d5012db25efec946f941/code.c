#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d \n",&a);
    printf("Hexadecimal: %X\n",a);
    printf("Octal: %o \n",a);
    return 0;
}