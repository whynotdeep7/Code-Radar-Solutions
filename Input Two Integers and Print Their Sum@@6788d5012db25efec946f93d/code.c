#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum: %d \n",sum);
    return 0;
}