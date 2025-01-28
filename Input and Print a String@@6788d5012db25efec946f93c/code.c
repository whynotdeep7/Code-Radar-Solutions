#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n[50];
    scanf("%s \n",n);
    printf("You entered: %s",n);
    return 0;
}