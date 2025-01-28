#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d \n",&a,&b);
    printf("Hexadecimal: %X\n",a,"Octal: %o \n",b);
    return 0;
}