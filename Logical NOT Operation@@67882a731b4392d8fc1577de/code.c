#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1;
    scanf("%d ",&num1);
    if(!(num1>0)){
        printf("True");
    }
    else{
        printf("False");
    }
}