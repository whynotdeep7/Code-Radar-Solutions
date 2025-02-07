#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double pie=3.14;
    double area;
    double num;
    scanf("%lf \n",&num);
    area= (pie * num* num);
    printf("Area: %.2lf",area);

}